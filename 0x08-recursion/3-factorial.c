/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * factorial - main fn
 * @n: - param 1
 *
 * Return: - return 0
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
