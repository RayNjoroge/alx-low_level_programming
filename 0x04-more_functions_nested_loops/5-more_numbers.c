/*include header file(s) with necessary functions*/
#include "main.h"

/**
 * more_numbers - entry point
 * @void: - no parameters
 * i - variable of type int
 * j - variable of type int
 * for loop to set the conditions to be checked
 * _putchar: - to print the output and new line
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
