#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree:  ptr to root node of tree to count num of leaves.
 * Return: size_t num of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		num += binary_tree_leaves(tree->left);
		num += binary_tree_leaves(tree->right);
		return (num);
	}
	return (1);
}
