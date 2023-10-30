/*Include necessary file dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * free_grid - main fn
 * @grid: - param 1
 * @height: - param 2
 *
 * Return: - returns 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		free(grid);
	}
}
