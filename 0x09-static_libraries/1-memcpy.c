/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _memcpy - entry point
 * @dest: - param 1
 * @src: - param 2
 * @n: - param 3
 * Return: - returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
