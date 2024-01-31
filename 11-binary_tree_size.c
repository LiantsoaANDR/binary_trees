#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_s = 0, right_s = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_s = binary_tree_size(tree);
	if (tree->right)
		right_s = binary_tree_size(tree);

	return (1 + left_s + right_s);
}
