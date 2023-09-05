/*Include necessary file dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - main fn
 * @size: - param 1 indicating size of the array
 * @c: - param 2 indicating the actual character with which
 *	to initialize each element
 *
 * Return: - returns NULL if size is 0
 *		returns a pointer to the array or NULL
 *		if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *char_array;

	if (size == 0)
	{
		return (NULL);
	}

	char_array = (char *) malloc(size * sizeof(char));

	if (char_array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			char_array[i] = c;
		}
	}

	return (char_array);
}
