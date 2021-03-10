#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node
 * Return: a pointer to the created node, or NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *curr;

	curr = malloc(sizeof(binary_tree_t));
	if (curr == NULL)
		return (NULL);
	curr->parent = parent;
	curr->n = value;
	curr->right = NULL;
	curr->left = NULL;
	if (parent->left != NULL)
	{
		curr->left = parent->left;
		curr->left->parent = curr;
	}
	parent->left = curr;
	return (curr);
}
