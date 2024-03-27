#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: parent address otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent != NULL && value < parent->n)
	{
		binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

		if (newNode == NULL)
			return (NULL);
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = parent;
		if (parent->left == NULL)
			parent->left = newNode;
		else
		{
			newNode->left = parent->left;
			parent->left->parent = newNode;
			parent->left = newNode;
		}
		return (newNode);
	}
	else
		return (NULL);
}
