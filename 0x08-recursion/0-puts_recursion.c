/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: - param 1
 * if statement
 * _putchar - prints output and new line
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
