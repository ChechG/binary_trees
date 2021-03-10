#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of other node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return: a pointer to the created node, or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *curr;

	if (parent == NULL)
		return (NULL);
	curr = malloc(sizeof(binary_tree_t));
	if (curr == NULL)
		return (NULL);
	curr->parent = parent;
	curr->n = value;
	curr->left = NULL;
	curr->right = NULL;
	if (parent->right != NULL)
	{
		curr->right = parent->right;
		curr->right->parent = curr;
	}
	parent->right = curr;
	return (curr);
}
