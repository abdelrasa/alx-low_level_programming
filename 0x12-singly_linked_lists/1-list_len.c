#include <lists.h>
/**
 * list_len - function that returns the number of elements
 * @h: pointer
 *
 * Return: valeu c
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
