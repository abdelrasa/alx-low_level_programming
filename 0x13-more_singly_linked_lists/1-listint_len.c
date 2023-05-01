#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function returns the number of elements in a linked listint_t
 * @h: pointer
 *
 * Return: number of the size list
 *
 */
size_t listint_len(const listint_t *h)
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
