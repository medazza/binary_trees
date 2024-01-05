#include "binary_trees.h"
/**
 * binary_tree_node - func creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 * Return: a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nwNode;

	nwNode = malloc(sizeof(binary_tree_t));
	if (nwNode == NULL)
		return (NULL);
	nwNode->n = value;
	nwNode->parent = parent;
	nwNode->left = NULL;
	nwNode->right = NULL;
	return (nwNode);
}
