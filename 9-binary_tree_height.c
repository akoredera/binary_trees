#include "binary_trees.h"
size_t count = 0;
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->left)
	{
		binary_tree_height(tree->left);
		count = count + 1;
		return (count);
	}
	else if (tree->right)
	{
		binary_tree_height(tree->right);
		count = count + 1;
		return (count);
	}
	else
		return (0);
}
