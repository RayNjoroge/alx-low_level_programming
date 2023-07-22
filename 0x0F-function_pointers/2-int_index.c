/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - entry point - function that searches for an integer
 * @array: - the array
 * @size: - the size of the array
 * @cmp: - pointer to the function to compare values
 * Return: - If size <= 0, return -1
 *		-1 If no element matches
 *		function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
