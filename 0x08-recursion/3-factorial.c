/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * factorial - entry point
 * @n: - param 1
 * if statement
 * Return: -  returns error(-1), 1 & the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
