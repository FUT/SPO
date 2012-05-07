#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "node.h"

a_node* buildFullNode(int enum_type, char* type, char* name, a_node* left, a_node* right, a_node* a, a_node* b, a_node* c, a_node* parent)
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
	n->parent = parent;

	printf("\n[PARSED:]  enum_type: %d\ttype: %s\tname: %s\t", enum_type, type, name);
	return n;
}

a_node* buildNode(int enum_type, char* type, char* name, a_node* left, a_node* right, a_node* parent)
{
	return buildFullNode(enum_type, type, name, left, right, NULL, NULL, NULL, parent);
}

void analyze(a_node* root)
{
	FILE* out;
	out = fopen("out.nyelv", "w");
	
	fclose(out);
}

