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
	char *ca;
	unsigned int i;

	ca = malloc(sizeof(char) * size);
	if (size == 0 || ca == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ca[i] = c;
	return (ca);
}
