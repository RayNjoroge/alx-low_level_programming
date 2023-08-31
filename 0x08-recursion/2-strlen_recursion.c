/*Include necessary file dependencies*/
#include "main.h"

/**
 * _strlen_recursion - main fn
 * @s: - parameter that holds the string
 *
 * Return: - returns 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\n')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
