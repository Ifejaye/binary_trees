#include "binary_trees.h" 

/**
  * binary_tree_insert_left - inserts a node as the left-child of another node
  * @parent: pointer to the node to insert the left-child in
  * @value: the value to store in the new node
  *
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
			exit(EXIT_FAILURE);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
		newNode->left = NULL;
	parent->left = newNode;
	return (newNode);
}
		
