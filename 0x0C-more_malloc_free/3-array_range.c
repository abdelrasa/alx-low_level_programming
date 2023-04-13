#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function creates an array of integers
 * @min: minimum range value
 * @max: maximum range value
 *
 * Return: pointer array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, sz;

	if (min > max)
		return (NULL);

	sz = max - min + 1;

	p = malloc(sizeof(int) * sz);

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
