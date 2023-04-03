#include "main.h"
/**
 * _memset - fill memory with value.
 * @s: pointer
 * @b: constant byte
 * @n: number of the byte use
 *
 * Return: pointer n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
