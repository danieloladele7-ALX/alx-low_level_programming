#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees 2 dimensional grid
 * @grid: two dimensional grid
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = height - 1; i >= 0 ; i--)
		free(grid[i]);
	free(grid);
}
