#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: ptr to node to find sibling.
 * Return: sibling node value.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->n < node->parent->n)
		return (node->parent->right);
	return (node->parent->left);
}
