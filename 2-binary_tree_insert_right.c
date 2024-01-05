#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node.
 * @parent: a pointer to the node to insert the right-child in.
 * @value:  is the value to store in the new node.
 * Return: a pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nwNode;

	if (!parent)
		return (NULL);
	nwNode = binary_tree_node(parent, value);
	if (!nwNode)
		return (NULL);
	if (parent->right != NULL)
	{
		nwNode->right = parent->right;
		parent->right->parent = nwNode;
	}
	parent->right = nwNode;
	return (nwNode);
}

