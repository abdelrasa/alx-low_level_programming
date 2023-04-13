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
	unsigned int i = 0, j = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;

	while (s2 && s2[ln2])
		ln2++;

	if (n < ln1)
		st = malloc(sizeof(char) * (ln1 + n + 1));
	else
		st = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!st)
		return (NUll);

	while (i < ln1)
	{
		st[i] = s1[i];
		i++;
	}

	while (n < ln2 && i < (ln1 + n))
		st[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		st[i++] = s2[j++];

	st[i] = '\0';

	return (st);
}
