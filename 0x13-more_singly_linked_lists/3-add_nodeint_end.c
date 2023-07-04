#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t linked list
 * @head: Pointer to the head of the linked list
 * @n: Data for the new node
 *
 * Return: Pointer to the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
