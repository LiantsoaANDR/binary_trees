#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child = NULL, *old = NULL;

	if (!parent)
		return (NULL);

	child = binary_tree_node(parent, value);
	if (!child)
		return (NULL);

	if (parent->left)
	{
		old = parent->left;
		old->parent = child;
	}

	parent->left = child;
	child->left = old;

	return (child);
}
