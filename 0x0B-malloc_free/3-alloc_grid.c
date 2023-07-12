/*include header file(s) with necessary funtions*/
#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - entry point
* @width: - param 1
* @height: - param 2
* Return: - returns pointer
*/
int **alloc_grid(int width, int height)
{
	int **str;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(int *) * height);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);

		if (str[i] == NULL)
		{
			for (; i >= 0; i--)
				free(str[i]);

			free(str);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			str[i][j] = 0;
	}
	return (str);
}
