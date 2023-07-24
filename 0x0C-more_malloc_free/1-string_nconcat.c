/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - fn that concatenates two strings
 * @s1: - param 1 - string 1
 * @s2: - param 2 - string 2
 * @n: - no of bytes from s2 to s1
 *	to concatenate
 * Return: - return NULL if fn terminates
 *		returns pointer to resulting str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index = 0, i = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	if (n < len1)
		str = malloc(sizeof(char) * (len + n + 1));
	else
		str = malloc(sizeof(char) * (len + len1 + 1));

	if (!str)
		return (NULL);

	while (index < len)
	{
		str[index] = s1[index];
		index++;
	}

	while (n < len1 && index < (len + n))
		str[index++] = s2[i++];
	str[index] =  '\0';

	return (str);
}
