#include "binary_trees.h"

/**
 * array_to_bst - function that builds a Binary Search Tree
 * from an array.
 * @array: Pointer to the first element of the array to be converted.
 * @size: Number of elements in the array.
 * Return: pointer to the root node of the created BST,
 * or NULL on failure.
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t indx;
	bst_t *bst_root = NULL;

	if (array == NULL || size == 0)
		return (NULL);
	for (indx = 0; indx < size; indx++)
	{
		if (bst_insert(&bst_root, array[indx]) == NULL)
			return (NULL);
	}
	return (bst_root);
}
