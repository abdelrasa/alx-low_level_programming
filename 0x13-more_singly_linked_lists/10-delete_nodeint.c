#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes a node at the specified index in the list
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: -1 if the deletion fails, 1 if the deletion is successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *node_to_delete = NULL;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (position < index - 1)
	{
		if (!(current->next) || !current)
			return (-1);
		current = current->next;
		position++;
	}

	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}
