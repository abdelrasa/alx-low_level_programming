#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: allocates memory for an array
 * @size: size bytes
 *
 * Return: pointer to allocated  memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(nmemb * size);
	if (i == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (nmemb * size); j++)
	{
		i[j] = 0;
	}
	return (i);
}
