/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strncat - entry point
 * @dest: - param 1
 * @src: - param 2
 * @n: - param 3
 * str_len, i - variables
 * while & for loop
 * Return: - returns value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int str_len;
	int i;

	str_len = 0;
	while (dest[str_len] != '\0')
	{
		str_len++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++, str_len++)
	{
		dest[str_len] = src[i];
	}

	dest[str_len] = '\0';
	return (dest);
}
