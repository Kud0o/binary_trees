#include "binary_trees.h"

#include <stdlib.h>
/**
 * binary_tree_delete - delete a node and it's children
 * @tree: Pointer to the node to delete
 *
 * Return: Nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
if (tree == NULL)
{
return;
}

if (tree->left != NULL)
{
binary_tree_delete(tree->left);
}

if (tree->right != NULL)
{
binary_tree_delete(tree->right);
}

free(tree);
}
