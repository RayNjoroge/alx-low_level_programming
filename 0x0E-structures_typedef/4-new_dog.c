/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Gets string length
 * @str: - param 1 (string to check length for)
 * Return: - returns the length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * _strcopy - copies string pointed to by src
 * @dest: - param 1 (buffer storing the string copy)
 * @src:- param 2 (the source string)
 *
 * Return: returns pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates new dog
 * @name: - name of the dog
 * @age: - age of the dog
 * @owner: owner of the dog
 *
 * Return: returns new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *hound;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	hound = malloc(sizeof(dog_t));
	if (hound == NULL)
		return (NULL);

	hound->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (hound->name == NULL)
	{
		free(hound);
		return (NULL);
	}

	hound->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (hound->owner == NULL)
	{
		free(hound->name);
		free(hound);

		return (NULL);
	}

	hound->name = _strcopy(hound->name, name);
	hound->age = age;
	hound->owner = _strcopy(hound->owner, owner);

	return (hound);
}
