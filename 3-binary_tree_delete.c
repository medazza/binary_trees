#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete.
 * Return: None.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	free(tree);
}
