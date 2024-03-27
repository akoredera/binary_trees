#include "binary_trees.h"
/**
 * binary_tree_node -  function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: parent address otherwise NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		parent = malloc(sizeof(binary_tree_t));
		if (parent == NULL)
			return (NULL);
		parent->n = value;
		parent->left = NULL;
		parent->right = NULL;
		return (parent);
	}
	else if (parent != NULL && value < parent->n)
	{
		binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

		if (NewNode == NULL)
			return (NULL);
		NewNode->n = value;
		NewNode->left = NULL;
		NewNode->right = NULL;
		parent->left = NewNode;
		NewNode->parent = parent;
		return (NewNode);
	}
	else if (parent != NULL && value > parent->n)
	{
		binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

		if (NewNode == NULL)
			return (NULL);
		NewNode->n = value;
		NewNode->left = NULL;
		NewNode->right = NULL;
		parent->right = NewNode;
		NewNode->parent = parent;
		return (NewNode);
	}
	else
		return (NULL);
}
