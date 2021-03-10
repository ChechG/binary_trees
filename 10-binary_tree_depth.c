#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree:  ptr to the node to measure the depth.
 * Return: size_t depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree->parent == NULL)
		return (0);
	if (tree->parent->right != NULL || tree->parent->left != NULL)
	{
		num =  binary_tree_depth(tree->parent);
		return (1 + num);
	}
	return (0);
}
