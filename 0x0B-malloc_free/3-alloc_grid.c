#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int i, j,  **grid;

	grid = malloc(row * sizeof(*grid));

	if (row < 1 || col < 1 || grid == 0)
		return (NULL);

	for (i = 0; i < row; i++)
	{
		grid[i] = malloc(col * sizeof(**grid));
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < col; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
