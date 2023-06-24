/*include header file(s) with necessary functions*/
#include "main.h"

/**
 * print_diagonal - entry point
 * @n: - param1 of type int
 * i - to hold counter value
 * for loop - to set the conditions
 * _putchar: - to print output and new line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
