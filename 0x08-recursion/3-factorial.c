/*Include necessary file dependecies*/
#include "main.h"
#include <stdio.h>

/**
 * factorial - main fn
 * @n: - parameter holding no
 *
 * Return: - returns 0
 *	return -1 if n is lower than 0 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
