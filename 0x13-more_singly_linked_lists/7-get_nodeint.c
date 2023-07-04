#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the node at a
 * specified index of a linked list
 * @head: Pointer to the head of the linked list
 * @index: Index of the node to retrieve
 *
 * Return: Pointer to the node at the specified index
 *
 * Description: Traverses the linked list until the desired index is reached,
 *              and returns a pointer to the corresponding node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int current_index;

	for (current_node = head, current_index = 0; current_node &&
			current_index < index; current_node = current_node->next)

	current_index++;
	return (current_node);
}
