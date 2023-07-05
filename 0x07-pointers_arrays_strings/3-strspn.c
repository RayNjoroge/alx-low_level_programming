/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strspn - entry point
 * @s: - param 1
 * @accept: - param 2
 * while loop & for loop & if statement
 * Return: - returns length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				length++;
				break;
			}
			else if (accept[i + 1] == '\0')
			return (length);
		}
		s++;
	}
	return (length);
}
