#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0 otherwise return height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count1 = 0;
	size_t count2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		count1 += binary_tree_height(tree->left) + 1;
	}
	else if (tree->right)
	{
		count2 += binary_tree_height(tree->left) + 1;
	}
	if (count1 > count2)
		return (count1);
	else
		return (count2);
}
