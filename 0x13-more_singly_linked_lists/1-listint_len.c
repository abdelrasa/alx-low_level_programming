#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function returns the number of elements in a linked listint_t
 * @h: Pointer to the head of the linke
 *
 * Return: Number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
