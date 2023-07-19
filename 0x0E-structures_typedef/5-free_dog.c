/*include header file(s) containing necessary functions*/
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - entry point
 * @d: - param 1 (dog to be freed)
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
