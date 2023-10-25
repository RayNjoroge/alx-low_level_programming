/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*fn prototype*/
int prime_recursion(int n, int divisor);

/**
 * prime_recursion - main fn
 * @n: - param 1
 * @divisor: - param 2
 *
 * Return: return 0
 */
int prime_recursion(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}

	return (prime_recursion(n, divisor - 1));
}

/**
 * is_prime_number - main fn
 * @n: - param that holds the number
 *
 * Return: - return 0
 *	return 1 if the input integer is a prime number
 */
int is_prime_number(int n)
{
	return (prime_recursion(n, n - 1));
}
