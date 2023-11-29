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
/*
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree:is a pointer to the root node of the tree to measure the balance
 * factor.
 * Return:If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height;
    int right_height;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
			left_height = binary_tree_balance(tree->left) + 1;
		else
			left_height = 0;
	
		if (tree->right != NULL)
			right_height = binary_tree_balance(tree->right) + 1;
		else
			right_height = 0;

    return (left_height - right_height);
}
