#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free memory
 * @head: pointer
 *
 */
void free_listint(listint_t *head)
{
	listint_t *i;

		while (head)
		{
			i = head;
			head = head->next;
			free(i);
		}
}
