#include "binary_trees.h"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_balance(tree) == 0)
	{
		if (!tree->left && !tree->right)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
