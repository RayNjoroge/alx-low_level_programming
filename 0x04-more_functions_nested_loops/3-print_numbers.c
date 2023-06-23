/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * print_numbers - entry point
 * for loop - to set conditions to be checked
 * _putchar: - prints i and next line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
