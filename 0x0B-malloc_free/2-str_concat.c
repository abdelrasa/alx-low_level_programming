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
	char *cnt;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	cnt = malloc(sizeof(char) * (i + j + 1));

	if (cnt == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		cnt[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		cnt[i] = s2[j];
		i++;
		j++;
	}
	cnt[i] = '\0';
	return (cnt);
}
