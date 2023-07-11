/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _memset - entry point
 * @s: - param 1
 * @b: - param 2
 * @n: - param 3
 * i - variable/ iterator
 * Return: - return s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
