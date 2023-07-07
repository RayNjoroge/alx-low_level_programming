/*include header file(s) containing necessary files*/
#include "main.h"

/**
 * prime_no - entry point
 * @n: - param 1 - no to check
 * @i: - param 2 - iterator
 * Return: - 1 if n is prime & 0 if n is not
 */
int prime_no(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);

	return (prime_no(n, i - 1));
}

/**
 * is_prime_number - entry point
 * @n: - param 1 - no to check
 * Return: - 1 if n is a prime no & 0 if n is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_no(n, n - 1));
}
