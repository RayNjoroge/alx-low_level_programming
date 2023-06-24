/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * print_triangle - entry point
 * @size: - parameter of type int
 * i,j,k - variables
 * if...else - to set the conditions
 * for loop to set conditions
 * _putchar: - to print the output
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j >= 1; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
