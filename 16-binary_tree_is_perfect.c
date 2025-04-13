#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t depth_left, depth_right;
if (tree == NULL)
return (0);
depth_left = binary_tree_height(tree->left);
depth_right = binary_tree_height(tree->right);
if (depth_left != depth_right)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_perfect(tree->left) &&
binary_tree_is_perfect(tree->right));
return (0);
}
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL)
return (0);
left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return (left > right ? left : right);
}
