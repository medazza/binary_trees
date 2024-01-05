#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: Number of leaves in the tree, or 0 if @tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left, leaves_right;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);
	return (leaves_left + leaves_right);
}
