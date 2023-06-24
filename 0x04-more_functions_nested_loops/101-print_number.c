/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * print_number - entry point
 * @n: - param of type int
 * i - variable of type unsigned
 * n - value initialized to var i
 * if statement - to set conditions
 * _putchar: - to print the output
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar (i % 10 + '0');
}
