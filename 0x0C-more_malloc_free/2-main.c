/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @str: - memory to be filled
 * @j: - char to copy
 * @k: - no of times to copy j
 * Return: - returns pointer to str
 */
char *_memset(char *str, char j, unsigned int k)
{
	unsigned int i;

	for (i = 0; i < k; i++)
	{
		str[i] = j;
	}

	return (str);
}
/**
 * _calloc - function that allocates memory
 *	for an array using malloc
 * @nmemb: - number of elements in the array
 * @size: - size of bytes of each element in the array
 * Return: returns ptr to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
