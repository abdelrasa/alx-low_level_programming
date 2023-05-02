#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum all data
 * @head: pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *i = head;
	int s;

	s = 0;

	while (i)
	{
		s += i->n;
		i = i->next;
	}
	return (s);
}
