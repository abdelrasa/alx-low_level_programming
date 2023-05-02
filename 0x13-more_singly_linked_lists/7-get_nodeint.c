#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return the node
 * @head: pointer
 * @index: index of the node
 *
 * Return: pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *i;
	unsigned int j;

	for (i = head, j = 0; i && j < index; i = i->next)
		j++;
	return (i);
}
