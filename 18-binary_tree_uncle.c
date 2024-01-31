#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!node)
		return (NULL);

	if (!(node->parent) || !(node->parent->parent))
		return (NULL);

	if (node->parent->parent->left == node->parent)
		uncle = node->parent->parent->right;
	else
		uncle = node->parent->parent->left;

	return (uncle);
}
