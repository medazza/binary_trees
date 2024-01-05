#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree.
 * @tree: A double pointer to the root node of the BST
 * to insert the value.
 * @value: The value to store in the node to be inserted.
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		return (bst_insert(&((*tree)->left), value));
	}
	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		return (bst_insert(&((*tree)->right), value));
	}
	return (NULL);
}
