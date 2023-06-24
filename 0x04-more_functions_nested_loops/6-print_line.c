/*include header file(s) with the necessary functions*/
#include "main.h"

/**
 * print_line - entry point
 * @n: - param of type int
 * if...else statemement to set the conditions
 * for loop to check conditions set
 * _putchar: - to print output & new line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
