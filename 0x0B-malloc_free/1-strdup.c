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
	char *mm;
	int i;
	int y;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	mm = malloc(sizeof(char) * (i + 1));

	if (mm == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		mm[y] = str[y];

	return (mm);
}
