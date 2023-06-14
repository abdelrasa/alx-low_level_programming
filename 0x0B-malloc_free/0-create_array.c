#include <stdlib.h>
#include "main.h"
/**
 * *create_array - array for initializes the specific char
 * @size: size of array
 * @c: pointer char
 * Return: pointer of array initialized or null
 *
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);
	unsigned int j;

	if (size == 0 || i == 0)
		return (0);

	for (j = 0; j < size; j++)
		i[j] = c;
	return (i);
}
