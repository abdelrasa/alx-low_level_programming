#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - that returns a pointer to a 2dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **dm, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	dm = malloc(sizeof(int *) * height);

	if (dm == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		dm[i] = malloc(sizeof(int) * width);

		if (dm[i] == NULL)
		{
			for (; i >= 0; i--)
				free(dm[i]);

			free(dm);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			dm[i][j] = 0;
	}

	return (dm);
}
