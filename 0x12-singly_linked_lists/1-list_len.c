#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * list_len - Returns the number of elements of linked list
 * @h: Pointer to the list_t list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
