#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function delete the node
 * @head: pointer
 * @index : index
 *
 * Return: -1 failur, 1 success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nd = NULL;
	listint_t *d = *head;

	if (*head == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(d);
		return (1);
	}

	while (i < index - 1)
	{
		if (!(d->next) || !d)
			return (-1);
		d = d->next;
		i++;
	}


	nd = d->next;
	d->next = nd->next;
	free(nd);

	return (1);
}
