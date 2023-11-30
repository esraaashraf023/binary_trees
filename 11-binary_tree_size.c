#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root of the tree.
 * Return: Size of the tree or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = 1;

	if (tree->right)
		size += binary_tree_size(tree->right);
	if (tree->left)
		size += binary_tree_size(tree->left);

	return (size);
}
