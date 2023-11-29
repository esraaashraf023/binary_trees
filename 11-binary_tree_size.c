#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree..
 * @tree: Pointer.
 * Return: Size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	if (tree->right)
		size = 1 + binary_tree_size(tree->right);
	if (tree->left)
		size = 1 + binary_tree_size(tree->left);

	return (size);
}
