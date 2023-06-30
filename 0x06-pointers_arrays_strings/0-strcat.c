/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strcat - entry point
 * @dest: - param 1
 * @src: - param 2
 * str_len, i - variables
 * while loop & for loop
 * Return: - returns dest
 */

char *_strcat(char *dest, char *src)
{
	int str_len;
	int i;

	str_len = 0;
	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	for (i = 0; src[i] != '\0'; i++, str_len++)
	{
		dest[str_len] = src[i];
	}
	dest[str_len] = '\0';

	return (dest);
}
