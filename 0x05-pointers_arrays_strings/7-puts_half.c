/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * puts_half - entry point
 * @str: - param
 * string, half - variables
 * while loop & if statement
 * _putchar: - prints output & new line
 */
void puts_half(char *str)
{
	int string;
	int half;

	string = 0;

	while (str[string] != '\0')
		string++;

	half = string / 2;

	if (string % 2 == 1)
		half++;

	while (half < string)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
