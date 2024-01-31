#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_l, height_r, is_perfect_l, is_perfect_r;

	if (!tree)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	if (height_l != height_r)
		return (0);

	/*Not correct, will check it later*/
	is_perfect_l = binary_tree_is_perfect(tree->left);
	is_perfect_r = binary_tree_is_perfect(tree->right);

	return (is_perfect_l && is_perfect_r);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: The height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (1 + left_h);

	return (1 + right_h);
}
