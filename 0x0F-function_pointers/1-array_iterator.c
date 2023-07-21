/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: - param 1 - array
 * @size: - param 2 - size of the array
 * @action: - param 3 - pointer to the function to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
