#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Function that perform a left-rotation
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *nw_root;

	if (!tree || tree->right == NULL)
		return (tree);
	nw_root = tree->right;
	tree->right = nw_root->left;
	if (nw_root->left != NULL)
		nw_root->left->parent = tree;
	nw_root->left = tree;
	nw_root->parent = tree->parent;
	tree->parent = nw_root;
	return (nw_root);
}
