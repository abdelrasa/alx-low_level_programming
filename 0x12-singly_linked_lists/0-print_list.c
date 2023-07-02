#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints elements of a linked list
 * @h: Pointer
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t nd = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		nd++;
		h = h->next;
	}
	return (nd);
}
