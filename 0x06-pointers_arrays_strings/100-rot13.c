/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * rot13 - entry point
 * @string: - param 1
 * s - variable
 * while loop & if...else if statement
 * Return: - returns value of string
 */

char *rot13(char *string)
{
	int s;

	s = 0;
	while (string[s] != '\0')
	{
		if ((string[s] >= 'a' && string[s] <= 'm') || (string[s]
		>= 'A' && string[s] <= 'M'))
		{
			string[s] += 13;
		}
		else if ((string[s] >= 'n' && string[s] <= 'z') ||
		(string[s] >= 'N' && string[s] <= 'Z'))
		{
			string[s] -= 13;
		}
		s++;
	}
	return (string);
}
