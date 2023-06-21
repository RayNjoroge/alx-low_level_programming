/*include header with the necessary functions*/
#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * declare variables of type int (count) and char (alphabet)
 * for loop - to set the conditions to check for
 * _putchar - to print the desired output
 */

void print_alphabet_x10(void)
{
	int count;
	char alphabet;

	for (count = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
