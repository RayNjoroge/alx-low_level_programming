/*include header containing necessary functions*/
#include "main.h"

/**
 * print_last_digit - entry point
 * @digit: - within the function
 * variable declaration - to hold value of the last digit
 * if statement to check whether the number is -ve or +ve
 * Return: - the value of the last digit
 */
int print_last_digit(int digit)
{
	int lst_no_digit;

	if (digit < 0)
	{
		lst_no_digit = -digit % 10;
	}
	else
	{
		lst_no_digit = digit % 10;
	}

	_putchar(lst_no_digit + '0');

	return (lst_no_digit);
}
