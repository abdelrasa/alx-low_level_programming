#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list
 * and sets the head pointer to NULL
 * @head: Pointer to a pointer to the head of the linked list
 *
 * Description: Traverses the linked list and frees each node's memory.
 *              Sets the head pointer to NULL after freeing all nodes.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL || *head == NULL)
		return;

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*head = NULL;
}
