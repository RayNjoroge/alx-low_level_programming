/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - entry point
 * @d: - param 1
 * Description: more description
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == NULL)
		d->age = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
