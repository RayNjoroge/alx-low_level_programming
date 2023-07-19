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
		return;

	if (d->name == NULL)
		printf("(nil)\n");
	if (d->age < 0)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
