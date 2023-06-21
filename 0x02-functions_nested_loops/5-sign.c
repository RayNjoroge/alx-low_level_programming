/*include header with necessary functions*/
#include "main.h"

/**
 * print_sign - the entry point
 * @n: parameter in the function
 * if...else if...else - to set the conditions to be checked
 * _putchar - to print the required output
 * Return: - to exit the program by return the set value
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');

		return (1);
	}
	else if (n == '0')
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
