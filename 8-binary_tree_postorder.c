#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree using post-order traversal
 * @tree: Pointer to root node of the tree
 * @func: Function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
