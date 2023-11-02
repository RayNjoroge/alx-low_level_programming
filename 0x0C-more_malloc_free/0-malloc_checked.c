/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - main fn
 * @b: - param 1
 *
 * Return: - returns pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
