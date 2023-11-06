/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - main fn
 * @str: - string to be checked
 *
 * Return: - return 0
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcpy - main fn
 * @dest: - param 1
 * @src: - param 2
 *
 * Return: - return 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

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
	dog_t *nw_Dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	nw_Dog = malloc(sizeof(dog_t));

	if (nw_Dog == NULL)
		return (NULL);

	nw_Dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (nw_Dog->name == NULL)
	{
		free(nw_Dog);

		return (NULL);
	}

	nw_Dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (nw_Dog->owner == NULL)
	{
		free(nw_Dog->name);
		free(nw_Dog);
		return (NULL);
	}

	nw_Dog->name = _strcpy(nw_Dog->name, name);
	nw_Dog->age = age;
	nw_Dog->owner = _strcpy(nw_Dog->owner, owner);

	return (nw_Dog);
}
