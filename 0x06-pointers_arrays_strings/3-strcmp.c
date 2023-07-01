/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strcmp - entry point
 * @s1: - param 1
 * @s2: - param 2
 * s - variable
 * while loop & if statement
 * Return: - returns 0
 */

int _strcmp(char *s1, char *s2)
{
	int s = 0;

	while (s1[s] != '\0' || s2[s] != '\0')
	{
		if (s1[s] != s2[s])
		{
			return (s1[s] - s2[s]);
		}
		s++;
	}

	return (0);
}
