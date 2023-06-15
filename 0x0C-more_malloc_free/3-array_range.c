#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range value
 * @max: maximum range value
 *
 * Return: aryointer array
 */
int *array_range(int min, int max)
{
	int *ary;
	int i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	ary = malloc(sizeof(int) * s);

	if (ary == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ary[i] = min++;

	return (ary);
}
