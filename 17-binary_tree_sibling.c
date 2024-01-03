#include "binary_trees.h"
/**
 * binary_tree_sibling - func creates a binary tree node.
 *
 * @node: pointer to the parent node of the node to create.
 * Dscription:A perfect binary tree is a tree in which all interior
 * nodes have two children and all leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
