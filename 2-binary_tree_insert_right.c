#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts a node as the right-child of a  node
  * @parent: pointer to the node to insert the right-child in
  * @value: the value to store in the new node
  *
  * Return: returns binary_tree_t
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		exit(EXIT_FAILURE);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	else
		newNode->right = NULL;
	parent->right = newNode;
	return (newNode);
}
