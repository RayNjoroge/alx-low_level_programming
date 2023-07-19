/*include header file(s) containing necessary files*/
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - entry point
 * @d: - param 1
 * @name: - param 2
 * @age: - param 3
 * @owner: - param 4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
