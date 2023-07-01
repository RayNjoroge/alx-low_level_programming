/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * print_number - entry point
 * @n: - param 1
 * if statement
 * _putchar: - to print output
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
