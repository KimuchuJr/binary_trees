#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *parent = NULL;
	int value = 42;

	binary_tree_t *new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		fprintf(stderr, "Failed to create a new node.\n");
		return 1;
	}

	return 0;
}

