#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free memory
 * @head: pointer
 *
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
