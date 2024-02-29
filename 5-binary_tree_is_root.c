#include "binary_trees.h"



/**
  * binary_tree_is_root - checks if a node is a lea
  * @node: pointer to the node to check
  *
  * Return: return 1 if node is a leaf, otherwise
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
