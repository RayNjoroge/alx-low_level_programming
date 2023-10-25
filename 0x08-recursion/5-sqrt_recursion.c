/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*fn prototype*/
int _sqrt_recursive(int n, int beg, int end);

/**
 * _sqrt_recursive - main fn
 * @n: - param 1 represnting no
 * @beg: - param representing start of searching range
 * @end: - param representing end of the range
 *
 * Return: - return 0
 */
int _sqrt_recursive(int n, int beg, int end)
{
	int mid;
	int sqre;

	if (beg > end)
	{
		return (-1);
	}

	mid = beg + (end - beg) / 2;
	sqre = mid * mid;

	if (sqre == n)
	{
		return (mid);
	}
	else if (sqre < n)
	{
		return (_sqrt_recursive(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursive(n, beg, mid - 1));
	}
}

/**
 * _sqrt_recursion - main fn
 * @n: - no to get square root of
 *
 * Return: - return 0
 *	return -1 if n does not have a natural no
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursive(n, 0, n));
}
