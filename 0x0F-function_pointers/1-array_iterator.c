/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - main fn
 * @array: - param 1
 * @size: - size of the array
 * @action: - param 2
 *
 * Return: - return 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

/**
 * print_element - main fn
 * @element: - param 1
 *
 * Return: Nothing.
 */
void print_element(int element)
{
	printf("%d", element);
}

