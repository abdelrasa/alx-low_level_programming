#include <stdio.h>
#include <stdlib.h>
#include "list.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 *@h: pointer
 *
 *Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t j;

	j = 0;

	while (h)
	{
		h = h->next;
		j++;
	}
	return (j);
}
