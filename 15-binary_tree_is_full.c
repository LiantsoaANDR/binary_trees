#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if a branch has 2 children (left and right)
 * Otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left && tree->right)
		return (1);

	return (0);
}
