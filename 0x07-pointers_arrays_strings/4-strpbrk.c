/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strpbrk - entry point
 * @s: - param 1
 * @accept: - param 2
 * i - variable
 * while loop & for loop & if statement
 * Return: - returns NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
