#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
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
