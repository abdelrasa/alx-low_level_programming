#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer
 * Return: the number of nodes
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
