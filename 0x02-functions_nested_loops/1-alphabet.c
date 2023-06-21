/*include section with the necessary library funtions from main.h*/
#include "main.h"

/**
 * print_alphabet - entry point
 * defining variable of type char
 *for loop - to set the conditions to be checked
 *_putchar - to print output and the newline
 */

void print_alphabet(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
	_putchar('\n');
}
