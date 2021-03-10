#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in a bt.
 * @tree:  ptr to root node of tree to count the num of nodes.
 * Return: size_t nodes.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int num_left = 0, num_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		num_left =  binary_tree_nodes(tree->left);
		num_right = binary_tree_nodes(tree->right);
		return (1 + num_left + num_right);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		num_left =  binary_tree_nodes(tree->left);
		num_right = binary_tree_nodes(tree->right);
		return (1 + (num_left > num_right ? num_left : num_right));
	}
	return (0);
}
