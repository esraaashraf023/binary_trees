#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in
 * a binary tree..
 * @tree: Pointer.
 * Return: 1 or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		n += 1;

	if (tree->right)
		n += binary_tree_nodes(tree->right);
	if (tree->left)
		n += binary_tree_nodes(tree->left);

	return (n);
}
