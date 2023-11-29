#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer.
 * Return: 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->right)
		right = binary_tree_is_full(tree->right);
	if (tree->left)
		left = binary_tree_is_full(tree->left);

	return (left && right);
}
