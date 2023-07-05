/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strchr - entry point
 * @s: - param 1
 * @c: - param 2
 * i - variable
 * for loop & if statement
 * Return: - returns (s+i) & NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return ('\0');
}
