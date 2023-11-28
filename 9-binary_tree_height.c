#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer.
 * Return: Height of the binary tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (left > right)
		return (left);
	else
		return (right);
}
