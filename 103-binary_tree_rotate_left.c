#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *ptr;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	ptr = tree->right;
	tree->right = ptr->left;

	if (ptr->left != NULL)
		ptr->left->parent = tree;

	ptr->parent = tree->parent;
	tree->parent = ptr;
	ptr->left = tree;
	return (ptr);
}
