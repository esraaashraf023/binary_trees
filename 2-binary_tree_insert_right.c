#include "binary_trees.h"
/*
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:is a pointer to the parent node of the node to create
 * @value:is the value to put in the new node
 * Return:a pointer to the created node, or NULL on failure or if
 * parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *ptr;

    if (parent == NULL)
        return NULL;
    ptr = malloc(sizeof(binary_tree_t));

    if (ptr == NULL)
        return NULL;
    ptr->n = value;
    ptr->parent = parent;
    ptr->left = NULL;
    ptr->right = NULL;

    if (parent->right != NULL)
        {
        ptr->right = parent->right;
        parent->right = ptr;
        }
    else
        parent->right = ptr;
    return (ptr);
}
