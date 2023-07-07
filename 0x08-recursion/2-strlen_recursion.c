/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: - param 1
 * if statement
 * Return: returns 0 or output
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
