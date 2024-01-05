#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs a right-rotation
 * on a binary tree.
 * @tree: Pointer to the root node of the tree to rotate.
 * Return: Pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *nw_root;

	if (!tree || !tree->left)
		return (tree);
	nw_root = tree->left;
	tree->left = nw_root->right;
	if (nw_root->right)
		nw_root->right->parent = tree;
	nw_root->right = tree;
	nw_root->parent = tree->parent;
	tree->parent = nw_root;
	if (nw_root->parent)
	{
		if (nw_root->parent->left == tree)
			nw_root->parent->left = nw_root;
		else
			nw_root->parent->right = nw_root;
	}
	return (nw_root);
}
