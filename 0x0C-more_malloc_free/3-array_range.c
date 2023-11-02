/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - main fn
 * @min: - param 1
 * @max: - param 2
 *
 * Return: - return ptr to the newly created array
 *              return NULL if min > max
 *              return NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
