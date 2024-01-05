#include "binary_trees.h"
/**
 * binary_tree_balance -  function that measures the balance factor of a binary tree.
 * @tree: Pointer 
 * Return: Balance factor of the tree, or 0 if @tree is NULL.to the root node of the tree to measure balance.to the root node
 * of the tree to measure the balance factor
 */
size_t binary_tree_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left, height_right;

	if (!tree)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	return (height_left - height_right);
}

/**
 * binary_tree_height - func measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 * Return: Height of the tree, or 0 if @tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (!tree)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return ((height_left > height_right) ? height_left + 1 : height_right + 1);
}
