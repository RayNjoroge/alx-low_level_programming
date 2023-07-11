/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strncat - entry point
 * @dest: - param 1
 * @src: - param 2
 * @n: - param 3
 * Return: - returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0
	while (dest[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
