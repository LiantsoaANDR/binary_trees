#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 1;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
	{
		is_full *= binary_tree_is_full(tree->left);
		is_full *= binary_tree_is_full(tree->right);
	}

	return (is_full);
}
