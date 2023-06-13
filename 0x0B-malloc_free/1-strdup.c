#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer to new string which duplicate the string
 * @str: pointe
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	int j;
	char *c;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(sizeof(char) * (i + 1));

	if (c == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		c[j] = str[j];

	return (c);
}
