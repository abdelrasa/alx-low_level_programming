#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - given position for new node
 * @head: pointer
 * @idx: indx
 * @n: data
 *
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nd;
	listint_t *d = *head;

	nd = malloc(sizeof(listint_t));

	if (!head || !nd)
		return (NULL);

	nd->n = n;
	nd->next = NULL;

	if (idx == 0)
	{
		nd->next = *head;
		*head = nd;
		return (nd);
	}

	for (i = 0; d && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nd->next = d->next;
			d->next = nd;
			return (nd);
		}
		else
			d = d->next;
	}

	return (NULL);
}
