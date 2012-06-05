#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "node.h"

#define CODE_SIZE 1000

a_node* buildFullNode(int enum_type, char* type, char* name, a_node* left, a_node* right, a_node* a, a_node* b, a_node* c)
{
	a_node* n = (a_node*)malloc(sizeof(a_node));
	
	n->enum_type = enum_type;
	n->type = type;
	n->name = name;
	n->left = left;
	n->right = right;
	n->a = a;
	n->b = b;
	n->c = c;

	printf("\n[PARSED:]  enum_type: %-5dtype: %-15s\tname: %-10s", enum_type, type, name);
	return n;
}

a_node* buildNode(int enum_type, char* type, char* name, a_node* left, a_node* right)
{
	return buildFullNode(enum_type, type, name, left, right, NULL, NULL, NULL);
}

char** code[CODE_SIZE];
FILE* out;
void analyze(a_node* root)
{
	out = fopen("out.nyelv", "w");
	
	printf("\n\n\nANALYZE!\n\n");
	printNode(root);

	
	printf("\n\n\nGENERATE CODE!\n\n");
	generateCode(root, 0);

	int i;
	for(i = 0; i < CODE_SIZE; i++)
	{
		if(code[i] != NULL)
		{
			fprintf(out, "%s", code[i]);
		}
	}

	fclose(out);
}

int generateCode(a_node* node, int pos)
{
	if(node == NULL) return pos;

	if(node->enum_type == FUNCTION_DEFINITION)
	{
		pos = generateCode(node->a, pos);
		pos = generateCode(node->b, pos);
		shift(pos);
		code[pos++] = "(){";
		pos = generateCode(node->c, pos);
		shift(pos);
		code[pos++] = "}";
		return pos;
	}

	if(node->enum_type == MULTIPLICATIVE_EXPRESSION || 
	node->enum_type == ADDITIVE_EXPRESSION || 
	node->enum_type == SHIFT_EXPRESSION || 
	node->enum_type == RELATIONAL_EXPRESSION || 
	node->enum_type == EQUALITY_EXPRESSION || 
	node->enum_type == AND_EXPRESSION || 
	node->enum_type == EXCLUSIVE_OR_EXPRESSION || 
	node->enum_type == INCLUSIVE_OR_EXPRESSION || 
	node->enum_type == LOGICAL_AND_EXPRESSION || 
	node->enum_type == LOGICAL_OR_EXPRESSION || 
	node->enum_type == AND_EXPRESSION || 
	node->enum_type == AND_EXPRESSION || 
	node->enum_type == AND_EXPRESSION)
	{
		pos = generateCode(node->left, pos);
		shift(pos);
		code[pos++] = node->name;
		pos = generateCode(node->right, pos);
		return pos;
	}

	if(node->enum_type == POSTFIX_EXPRESSION)
	{
		if(node->type[8] == '5' || node->type[8] == '6')
		{
			pos = generateCode(node->left, pos);
			shift(pos);
			code[pos++] = node->name;
		}
		return pos;
	}	

	if(node->enum_type == ITERATION_STATEMENT)
	{
		shift(pos);
		code[pos++] = node->name;
		pos = generateCode(node->left, pos);
		shift(pos);
		code[pos++] = "){";
		pos = generateCode(node->right, pos);
		shift(pos);
		code[pos++] = "}";
		return pos;
	}

	if(node->enum_type == RELATIONAL_EXPRESSION)
	{
		pos = generateCode(node->left, pos);
		shift(pos);
		code[pos++] = node->name;
		pos = generateCode(node->right, pos);
		return pos;
	}

	if(node->enum_type == BLOCK_ITEM)
	{
		pos = generateCode(node->left, pos);
		shift(pos);
		code[pos++] = ";\n";
		return pos;
	}

	if(node->name != NULL)
	{
		printf("%10s, %d\n", node->name, pos);
		shift(pos);
		code[pos++] = node->name;
	}

	if(node->enum_type == INIT_DECLARATOR)
	{
		pos = generateCode(node->left, pos);
		shift(pos);
		code[pos++] = "=";
		pos = generateCode(node->right, pos);
		return pos;
	}

	pos = generateCode(node->left, pos);
	pos = generateCode(node->right, pos);
	pos = generateCode(node->a, pos);
	pos = generateCode(node->b, pos);
	pos = generateCode(node->c, pos);
	return pos;
}

void shift(int pos)
{
	int i;
	for(i = CODE_SIZE - 1; i > pos; i--)
	{
		code[i] = code[i - 1];
	}
}

void printNode(a_node* node)
{
	if(node == NULL) {return;}
	printf("\n[ANALYZED:]  enum_type: %-5dtype: %-15s\tname: %-10s", node->enum_type, node->type, node->name);

	printf("has: ");
	if(node->left != NULL){printf("l");}
	if(node->right != NULL){printf("r");}
	if(node->a != NULL){printf("a");}
	if(node->b != NULL){printf("b");}
	if(node->c != NULL){printf("c");}


	printNode(node->left);
	printNode(node->right);
	printNode(node->a);
	printNode(node->b);
	printNode(node->c);
}

