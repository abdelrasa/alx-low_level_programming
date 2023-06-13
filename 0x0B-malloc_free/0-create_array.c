#include <stdlib.h>
#include "mainh"
/**
 * create_array - creates array of chars, initializes it with a specific char
 * @size: size of array
 * @c: char
 * Return: a pointer to the array, or NULL if it fails
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
