/*Include necessary file dependencies*/
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - main fn
 * @s: - parameter to hold the string
 *
 * Return: - returns 0
 */
void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
