#include "binary_trees.h"
/**
 * array_to_avl - function that builds an AVL tree from an array.
 * @array: pointer to the first element of the array to be converted
 * @size: the number of element in the array.
 * Return: AVL tree from array
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t ind, jnd = 0;
	avl_t *root;

	root = NULL;
	if (size == 0)
		return (NULL);
	for (ind = 0; ind < size; ind++)
	{
		for (jnd = 0; jnd < ind; jnd++)
		{
			if (array[jnd] == array[ind])
				break;
		}
		if (jnd == ind)
		{
			if (avl_insert(&root, array[ind]) == NULL)
				return (NULL);
		}
	}
	return (root);
}
