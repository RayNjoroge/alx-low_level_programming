/*Include necessary file dependencies*/
#include "main.h"

/**
 * _print_rev_recursion - main fn
 * @s: - parameter to hold the string
 *
 * Return: - returns 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
