/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - main fn
 * @array: - param 1
 * @size: - size of the array
 * @cmp: - param 2
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}

/**
 * even_No - main fn
 * @value: - no to check whether it is even
 *
 * Return: - return 0
 */
int even_No(int value)
{
	return (value % 2 == 0);
}
