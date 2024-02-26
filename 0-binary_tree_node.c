#include "binary_trees.h"

/**
  * binary_tree_node - the functiom thay creates the tree
  * @parent: pointer to the parent node i want to create
  * @value: the value to put in the new nod
  *
  * Return: returns the type binary_tree_t
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t))

	if (newNode == NULL)
		exit(EXIT_FAILURE);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

