/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - main fn
 * @name: - name of the dog
 * @age: - age of the dog
 * @owner: - owner of the dog
 *
 * Return: - return 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_Dog = (dog_t *)malloc(sizeof(dog_t));

	if (nw_Dog == NULL)
	{
		return (NULL);
	}

	nw_Dog->name = strdup(name);
	nw_Dog->owner = strdup(owner);

	if (nw_Dog->name == NULL || nw_Dog->owner == NULL)
	{
		free(nw_Dog->name);
		free(nw_Dog->owner);
		free(nw_Dog);

		return (NULL);
	}

	nw_Dog->age = age;

	return (nw_Dog);
}
