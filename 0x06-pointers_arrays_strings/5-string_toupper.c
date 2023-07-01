/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * string_toupper - entry point
 * @ptr: - param 1
 * while loop & if statement
 * Return: - returns ptr
 */

char *string_toupper(char *ptr)
{
	int s = 0;

	while (ptr[s] != '\0')
	{
		if (ptr[s] >= 'a' && ptr[s] <= 'z')
		{
			ptr[s] = ptr[s] - ('a' - 'A');
		}
		s++;
	}
	return (ptr);
}
