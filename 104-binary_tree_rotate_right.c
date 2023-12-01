#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *ptr;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	ptr = tree->left;
	tree->left = ptr->right;

	if (ptr->right != NULL)
		ptr->right->parent = tree;

	ptr->parent = tree->parent;
	tree->parent = ptr;
	ptr->right = tree;
	return (ptr);
}

