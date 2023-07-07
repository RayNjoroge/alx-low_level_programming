/*include header file(s) containing necessary functions*/
#include "main.h"

/*function prototype*/
int recursion(int n, int i);

/**
 * _sqrt_recursion - entry point
 * @n: - param for which to check square root of
 * if statement - to check for error
 * Return: - the value of square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (recursion(n, 0));
}

/**
 * recursion - 2nd function entry point
 * @n: - param 1 - actual number for which we
 * are checking square rot for
 * @i: - iterator
 * Return: - returns square root
 */
int recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);

	return (recursion(n, i + 1));
}
