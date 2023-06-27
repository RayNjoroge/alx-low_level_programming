/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _puts - entry point
 * @str: - param
 * while loop to set conditions to check for
 * _putchar: - to print output
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
