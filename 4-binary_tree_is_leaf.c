#include "binary_trees.h"
/**
 * binary_tree_is_leaf - func checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
