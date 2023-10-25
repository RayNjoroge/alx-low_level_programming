/*Include necessary dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_rev_recursion - main fn
 * @s: - param 1
 *
 * _putchar - prints output
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}
