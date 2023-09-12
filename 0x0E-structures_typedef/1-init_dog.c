/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - main fn
 * @d: - param 1
 * @name: - name of the dog
 * @age: - age of the dog
 * @owner: - name of the owner
 *
 * Return: - returns 0
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
