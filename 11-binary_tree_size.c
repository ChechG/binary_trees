#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree:  ptr to root node of tree to measure the size.
 * Return: size_t size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num = 1;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		num += binary_tree_size(tree->left);
		num += binary_tree_size(tree->right);
	}
	return (num);
}
