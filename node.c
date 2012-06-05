#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "node.h"

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

void analyze(a_node* root)
{
	string s = "sdf";

	FILE* out;
	out = fopen("out.nyelv", "w");
	printf("\n\n\nANALYZE!\n\n");
	printNode(root);
	fclose(out);
}

void printNode(a_node* node)
{
	if(node == NULL) {return;}
	printf("\n[ANALYZED:]  enum_type: %-5dtype: %-15s\tname: %-10s", node->enum_type, node->type, node->name);
	printNode(node->left);
	printNode(node->right);
	printNode(node->a);
	printNode(node->b);
	printNode(node->c);
}

