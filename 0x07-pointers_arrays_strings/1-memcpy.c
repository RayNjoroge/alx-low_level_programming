/*include header file(s) containing necessasary functions*/
#include "main.h"

/**
 * _memcpy - entry point
 * @dest: - param 1
 * @src: - param 2
 * @n: - param 3
 * c - variable
 * while loop
 * Return: - returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c = 0;

	while (c < n)
	{
		dest[c] = src[c];
		c++;
	}
	return (dest);
}
