/*Include necessary file dependencies*/
#include "main.h"

/**
 * _puts_recursion - main fn
 * @s: - parameter to contain string
 *
 * Return: - returns 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
