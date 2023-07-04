#include "lists.h"

/**
 * free_listint - Frees the memory allocated for a listint_t linked list
 * @head: Pointer to the head of the linked list
 *
 * Description: Traverses the linked list and frees each node's memory.
 *              Sets the head pointer to NULL.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}
