/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - fn that allocates memory using malloc
 * @b: - no of bytes to allocate
 * Return: - returns pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
