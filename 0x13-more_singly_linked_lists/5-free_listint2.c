#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function can be free memory
 * @head: pointer
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *i, *j;

	if (head == NULL)
		return;

	i = *head;
	while (i)
	{
		j = i;
		i = i->next;
		free(j);
	}
	*head = NULL;
}
