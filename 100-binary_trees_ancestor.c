#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node.
 * @second: is a pointer to the second node.
 * Return:a pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, 
                                     const binary_tree_t *second)
{
  const binary_tree_t *ancestor1, *ancestor2;

  if (first == NULL || second == NULL)
    return (NULL);

  ancestor1 = first;

  while (ancestor1 != NULL)
  {
    ancestor2 = second;

    while (ancestor2 != NULL)
    {
      if (ancestor1 == ancestor2)
        return ((binary_tree_t *)ancestor1);

      ancestor2 = ancestor2->parent;
    }

    ancestor1 = ancestor1->parent;
  }

  return (NULL);
}
