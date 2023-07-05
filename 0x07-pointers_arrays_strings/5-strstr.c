/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strstr - entry point
 * @haystack: - param 1
 * @needle: - param 2
 * i - variable
 * if statement & while loop & do...while loop
 * Return: - returns NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				return (haystack);

				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
