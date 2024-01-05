#include "binary_trees.h"

/**
 * bst_min_value_node - Func finds the node with
 * the smallest value in the BST.
 * @node: Pointer to the root of the subtree to search.
 * Return: Pointer to the node with the smallest value.
 */
bst_t *bst_min_value_node(bst_t *node)
{
	bst_t *current = node;

	while (current && current->left)
		current = current->left;
	return (current);
}

/**
 * bst_remove -  function that removes a node from a
 * Binary Search Tree.
 * @root: Pointer to the root node of the tree
 * where you will remove a node.
 * @value: The value to remove from the tree.
 * Return: pointer to the new root node of the tree
 * after removing the desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	if (root == NULL)
		return (root);
	if (value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			bst_t *temp = root->right;
			
			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			bst_t *temp = root->left;

			free(root);
			return (temp);
		}
		bst_t *temp = bst_min_value_node(root->right);

		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
	}
	return (root);
}
