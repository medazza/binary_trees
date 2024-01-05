#include "binary_trees.h"
/**
 * binary_tree_insert_left -  function that inserts a node as
 * the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nwNode;

	if (!parent)
		return (NULL);
	nwNode = binary_tree_node(parent, value);
	if (!nwNode)
		return (NULL);
	if (parent->left != NULL)
	{
		nwNode->left = parent->left;
		parent->left->parent = nwNode;
	}
	parent->left = nwNode;
	return (nwNode);
}

