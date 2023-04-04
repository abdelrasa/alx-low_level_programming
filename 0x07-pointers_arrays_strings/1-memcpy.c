#include "main.h"
/**
 * _memcpy - copy memory array
 * @dest: memory location stored
 * @src: source
 * @n: bytes
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
