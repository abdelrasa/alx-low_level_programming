#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two trings to find length
 * @s1: first string
 * @s2: secand string
 * Return: to s1 and s2
 */
char *str_concat(char *s1, char *s2)
{

	int i;
	int j;
	char cnct;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	cnct = malloc(sizeof(char) * (i + j + 1));

	if (cnct == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		cnct[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cnct[i] = s2[j];
		i++;
		j++;
	}
	cnct[i] = '\0';
	return (cnct);
}
