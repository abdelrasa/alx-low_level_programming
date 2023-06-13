#include "main.h"
#include <stdlib.h>
/**
 * free_grid - can to  frees a 2dimensional grid previously
 * @grid: grid of memory
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
