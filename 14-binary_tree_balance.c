#include "binary_trees.h"

size_t binary_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: ptr to root node of tree to measure balance factor.
 * Return: difference right and left.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t num_left = 0, num_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		num_left += binary_height(tree->left);
	if (tree->right != NULL)
		num_right += binary_height(tree->right);
	return (num_left - num_right);
}
/**
 * binary_height - height of a binary tree inlcuding leaf.
 * @tree: ptr to root node of tree to measure height.
 * Return: height.
 */
size_t binary_height(const binary_tree_t *tree)
{
	size_t num_left = 0, num_right = 0;

	if (tree == NULL)
		return (0);
	num_left =  binary_height(tree->left);
	num_right = binary_height(tree->right);
	return (1 + (num_left > num_right ? num_left : num_right));
}
