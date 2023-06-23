/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * print_most_numbers - entry point
 * @void: - no parameters
 * i - variable to hold the value
 * for loop to set the conditions
 * if...else statement to set more conditions
 * continue - control flow statement
 * _putchar: - to print the desired output & new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
