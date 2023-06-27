/*include header file(s) with necessary functions*/
#include "main.h"

/**
 * print_rev - entry point
 * @s: - param of type char
 * str_len - to hold value of length of string
 * i - to be used in for loop counter
 * while loop
 * for loop
 * _putchar: - to print output & new line
 */
void print_rev(char *s)
{
	int str_len = 0;
	int i;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	for (i = str_len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
