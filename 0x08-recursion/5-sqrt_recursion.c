/*Include necessary file dependencies*/
#include "main.h"

/*function prototype*/
int _sqrt_recursive(int n, int beg, int stop);

/**
 * _sqrt_recursive - main fn
 * @n: - param 1 representing no.
 * @beg: - param representing the start of the searching range
 * @stop: - param representing the end of the range
 *
 * Return: - return 0
 */
int _sqrt_recursive(int n, int beg, int stop)
{
	int mid;
	int sqre;

	if (beg > stop)
	{
		return (-1);
	}

	mid = beg + (stop - beg) / 2;
	sqre = mid * mid;

	if (sqre == n)
	{
		return (mid);
	}
	else if (sqre < n)
	{
		return (_sqrt_recursive(n, mid + 1, stop));
	}
	else
	{
		return (_sqrt_recursive(n, beg, mid - 1));
	}
}

/**
 * _sqrt_recursion - main fn
 * @n: - parameter representing number
 *
 * Return: - return -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursive(n, 0, n));
}
