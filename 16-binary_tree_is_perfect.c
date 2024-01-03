#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - func creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	return (binary_tree_is_full(tree));
}