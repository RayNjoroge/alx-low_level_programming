/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strcat - entry point
 * @dest: - param 1
 * @src: - param 2
 * Return: - returns dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
