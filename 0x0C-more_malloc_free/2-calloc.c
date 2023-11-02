/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - main fn
 * @nmemb: - param 1
 * @size: - param 2
 *
 * Return: - returns ptr to allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t ttl_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ttl_size = (size_t)nmemb * size;

	ptr = malloc(ttl_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, ttl_size);

	return (ptr);
}
