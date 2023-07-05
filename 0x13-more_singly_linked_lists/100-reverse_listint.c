#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverses a linked list of type listint_t
 * @head: Pointer to a pointer to the head of the list
 *
 * Return: A pointer to the new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = NULL;
	listint_t *next_node = NULL;

	if (!*head || !head)
		return (NULL);

	current_node = *head;
	*head = NULL;
	while (current_node)
	{
		next_node = current_node->next;
		current_node->next = *head;
		*head = current_node;
		current_node = next_node;
	}
	return (*head);
}
