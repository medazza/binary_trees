#include "binary_trees.h"
/**
 * binary_tree_insert_right - func creates a binary tree node.
 *
 * @parent: pointer to the parent node of the node to create.
 * @value: value to put in the new node.
 *
 * Return: pointer to the new node, or NULL on failure
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

