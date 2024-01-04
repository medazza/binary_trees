#include "binary_trees.h"

/**
 * array_to_bst - func builds a Binary Search Tree from an array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * Return: A pointer to the root node of the
 * created BST, or NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *bst_root = NULL;

	if (array == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (bst_insert(&bst_root, array[i]) == NULL)
			return (NULL);
	}
	return (bst_root);
}
