/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * puts2 - entry point
 * @str: - param of type char
 * i - variables
 * while loop & if statement
 * _putchar: - prints output & new line
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
