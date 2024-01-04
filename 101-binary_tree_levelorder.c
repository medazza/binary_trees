#include "binary_trees.h"
/**
 * binary_tree_levelorder - funct that goes through a
 * binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_node_t *front = NULL, *rear = NULL;
	const binary_tree_t *current;

	if (!tree || !func)
		return;
	enqueue(&front, &rear, tree);
	while (front)
	{
		current = front->node;
		func(current->n);
		if (current->left)
			enqueue(&front, &rear, current->left);
		if (current->right)
			enqueue(&front, &rear, current->right);
		dequeue(&front);
	}
}

/**
 * enqueue - func enqueue a node into the queue
 * @front: Pointer to the front of the queue
 * @rear: Pointer to the rear of the queue
 * @node: Pointer to the binary tree node to enqueue
 */
void enqueue(queue_node_t **front, queue_node_t **rear,
		const binary_tree_t *node)
{
	queue_node_t *new_node = malloc(sizeof(queue_node_t));

	if (new_node == NULL)
		exit(EXIT_FAILURE);
	new_node->node = node;
	new_node->next = NULL;
	if (*rear == NULL)
		*front = new_node;
	else
		(*rear)->next = new_node;
	*rear = new_node;
}

/**
 * dequeue - func dequeue a node from the queue
 * @front: Pointer to the front of the queue
 */
void dequeue(queue_node_t **front)
{
	queue_node_t *temp;

	if (*front == NULL)
		return;
	temp = *front;
	*front = (*front)->next;
	free(temp);
}
