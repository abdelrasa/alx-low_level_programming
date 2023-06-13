#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - can to returns a pointer to a 2dimensional array of integers
 * @width: int
 * @height: int
 * Return: two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **dmnt;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dmnt = malloc(sizeof(int *) * height);

	if (dmnt == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dmnt[i] = malloc(sizeof(int) * width);

		if (dmnt[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dmnt[i]);

			free(dmnt);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dmnt[i][j] = 0;
	}

	return (dmnt);
}
