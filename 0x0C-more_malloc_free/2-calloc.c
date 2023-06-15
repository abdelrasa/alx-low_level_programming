#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for array and initializes to zero
 * @nmemb: Number of elements in the array
 * @size: size bytes
 *
 * Return: pointer to allocated  memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}
	return (p);
}
