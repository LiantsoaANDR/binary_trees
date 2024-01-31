#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (1 + left_h);

	return (1 + right_h);
}
