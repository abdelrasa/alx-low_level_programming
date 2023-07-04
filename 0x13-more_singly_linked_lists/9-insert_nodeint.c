#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in the list
 * @head: Pointer to a pointer to the head of the list
 * @idx: Index at which the new node should be inserted
 * @n: Data value for the new node
 *
 * Return: Pointer to the newly inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (position = 0; current && position < idx; position++)
	{
		if (position == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
	}

	return (NULL);
}
