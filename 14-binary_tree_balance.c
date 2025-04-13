#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node
 * Return: Balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0, right = 0;
if (tree == NULL)
return (0);
if (tree->left)
left = (int)binary_tree_height(tree->left) + 1;
if (tree->right)
right = (int)binary_tree_height(tree->right) + 1;
return (left - right);
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
