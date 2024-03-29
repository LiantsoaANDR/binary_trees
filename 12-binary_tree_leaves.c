#include "binary_trees.h"
/**
 * binary_tree_leaves - COuntes the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: the number of leaves of the tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		leaves++;

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
