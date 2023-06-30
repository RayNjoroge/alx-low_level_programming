/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strncpy - entry point
 * @dest: - param 1
 * @src: - param 2
 * @n: - param 3
 * count - variable
 * for loop
 * Return: - returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
	dest[count] = src[count];

	for (; count < n; count++)
	dest[count] = '\0';

	return (dest);
}
