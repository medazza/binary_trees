#include "binary_trees.h"

int binary_tree_is_descendant(const binary_tree_t *node, const
		binary_tree_t *ancestor);
/**
 * binary_trees_ancestor - func find the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const
		binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (binary_tree_is_descendant(second, first))
		return ((binary_tree_t *)first);
	if (binary_tree_is_descendant(first, second))
		return ((binary_tree_t *)second);
	ancestor = binary_trees_ancestor(first->parent, second);
	if (!ancestor)
		return (binary_trees_ancestor(first, second->parent));
	return (ancestor);
}

/**
 * binary_tree_is_descendant - func check if one node is a descendant of another
 * @node: Potential descendant
 * @ancestor: Potential ancestor
 *
 * Return: 1 if the first node is a descendant
 * of the second, 0 otherwise
 */
int binary_tree_is_descendant(const binary_tree_t *node,
		const binary_tree_t *ancestor)
{
	if (node == NULL || ancestor == NULL)
		return (0);
	if (node == ancestor)
		return (1);
	return (binary_tree_is_descendant(node->parent, ancestor));
}
