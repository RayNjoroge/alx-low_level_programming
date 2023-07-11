/*include header file(s) with necessary funtions*/
#include "main.h"
#include <stdlib.h>

/**
* create_array - entry point
* @size: - param 1
* @c: - param 2
*
* Return: - returns pointer to the array or NULL
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
