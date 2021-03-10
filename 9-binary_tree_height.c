#include "binary_trees.h"
/**
 * binary_tree_height - goes through a bt using postorder traversal.
 * @tree:  ptr to root node of tree to measure height.
 * Return: size_t height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t num_left = 0, num_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
	{
		num_left =  binary_tree_height(tree->left);
		num_right = binary_tree_height(tree->right);
		return (1 + (num_left > num_right ? num_left : num_right));
	}
	return (0);
}
