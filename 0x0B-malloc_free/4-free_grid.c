/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdlib.h>

/**
* free_grid - entry point
* @grid: - param 1
* @height: - param 2
* Return: - returns grid
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
