/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - main fn
 * @ptr: - param 1
 * @old_size: - param 2
 * @new_size: - param 3
 *
 * Return: - return NULL if new_size is equal to zero,
 *	and ptr is not NULL, then the call is equivalent to free(ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nw_ptr;
	size_t cpy_size;

	if (new_size == 0)
	{
		free(ptr);

		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
				}

				if (new_size == old_size)
				{
				return (ptr);
				}

				nw_ptr = malloc(new_size);

				if (nw_ptr == NULL)
				{
				return (NULL);
				}

				cpy_size = (old_size < new_size) ? old_size : new_size;

				memcpy(nw_ptr, ptr, cpy_size);

				free(ptr);

				return (nw_ptr);
}
