#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: tring
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *mem;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		i++;
	mem = malloc(sizeof(char) * (i + 1));

	if (mem == 0)
		return (0);

	for (j = 0; str[j]; j++)
		mem[j] = str[i];

	return (mem);
}
