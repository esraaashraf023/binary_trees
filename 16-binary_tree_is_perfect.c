#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree..
 * @tree: Pointer.
 * Return: Size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		size += binary_tree_size(tree->left);
	if (tree->right != NULL)
		size += binary_tree_size(tree->right);
	return (size);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer.
 * Return: Height of the binary tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);

	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree:is a pointer to the root node of the tree to check
 * Return:If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	if (size == ((size_t)1 << height) - 1)
		return (1);
	else
		return (0);
}
