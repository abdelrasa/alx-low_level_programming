#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - that returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 2dimensional array
 */

int **alloc_grid(int width, int height)

	int **mm, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mm = malloc(sizeof(int *) * height);

	if (mm == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mm[i] = malloc(sizeof(int) * width);

		if (mm[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mm[i]);

			free(mm);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mm[i][j] = 0;
	}

	return (mm);
}
