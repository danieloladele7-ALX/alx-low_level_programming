#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  allocate a 2 dimensional array of integers
 * @width: rows of matrix
 * @height: columns of string
 *
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = (int *) malloc(height * sizeof(int *));

	if (matrix == NULL)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		matrix[i] = (int *) malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (i = i - 1; i >= 0 ; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
