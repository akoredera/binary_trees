#include "binary_trees.h"
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		free(tree);
		binary_tree_delete(tree->right);
	}
	/*
	if (tree == NULL)
		return;
	else
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
			if (tree->right != NULL)
			{
				binary_tree_delete(tree->right);
			}
			else
			{
				free(tree);
				return;
			}
		}
		else
		{
			free(tree);
			return;
		}  

	}
		
*/
}
