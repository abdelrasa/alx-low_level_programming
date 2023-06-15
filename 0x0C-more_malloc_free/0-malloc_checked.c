#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 * Return: pointer the array initialized or null
 */

void *malloc_checked(unsigned int b)
{
	int *pn = malloc(b);

	if (pn == 0)
		exit(98);

	return (pn);
}
