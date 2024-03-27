#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: parent address otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent != NULL && value >= parent->n)
	{
		binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

		if (newNode == NULL)
			return (NULL);
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = parent;
		if (parent->right == NULL)
			parent->right = newNode;
		else
		{
			newNode->right = parent->right;
			parent->right->parent = newNode;
			parent->right = newNode;
		}
		return (newNode);
	}
	else
		return (NULL);
}
