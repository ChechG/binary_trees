#include "binary_trees.h"

size_t binary_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * binary_tree_is_full - measures the balance factor of a binary tree
 * @tree: ptr to root node of tree to check.
 * Return: difference right and left.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
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
	if (tree->right != NULL || tree->left != NULL)
	{
		num_left =  binary_height(tree->left);
		num_right = binary_height(tree->right);
		return (1 + (num_left > num_right ? num_left : num_right));
	}
	return (0);
}

/**
 * binary_tree_is_perfect - measures the balance factor of a binary tree
 * @tree: ptr to root node of tree to check.
 * Return: difference right and left.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1)
	{
		if (binary_tree_balance(tree) == 0)
		{
			return (1);
		}
	}
	return (0);
}
