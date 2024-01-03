#include "binary_trees.h"
/**
 * binary_tree_depth - func creates a binary tree node.
 *
 * @tree: pointer to the parent node of the node to create.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree)
	{
		while (tree->parent)
		{
			tree = tree->parent;
			depth++;
		}
	}
	return (depth);
}
