/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: - param 1
 * if statement - to set the base case
 * _putchar - prints output
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
