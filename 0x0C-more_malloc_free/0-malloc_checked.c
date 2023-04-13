#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: byte
 * Return: pointer the array initialized or null
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
		exit(NULL);

	return (p);
