#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer of string1
 * @s2: pointer of string2
 * @n: number of byte
 * Return: pointer string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st
	unsigned int i, j, ln1, ln2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ln1 = 0; s1[ln1] != '\0'; ln1++)
		;

	for (ln2 = 0; s2[ln2] != '\0'; ln2++)
		;

	st = malloc(ln1 + n + 1);
	if (st == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		st[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		st[i] = s2[j];
		i++;
	}

	st[i] = '\0';
	return (st);
}
