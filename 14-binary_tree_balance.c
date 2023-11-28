#include "binary_trees.h"
/*
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height;
    int right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height >= right_height)
        return (left_height - right_height);
    else
        return (right_height - left_height);
}
