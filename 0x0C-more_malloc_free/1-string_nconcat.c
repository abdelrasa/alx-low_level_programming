#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer of first string
 * @s2: pointer of second string
 * @n: number of byte
 * Return: pointer string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cnct_str;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	cnct_str = malloc(sizeof(char) * (len1 + n + 1));
	if (cnct_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		cnct_str[i] = s1[i];

	for (j = 0; j < n; j++)
		cnct_str[i + j] = s2[j];

	cnct_str[i + j] = '\0';

	return (cnct_str);
}
