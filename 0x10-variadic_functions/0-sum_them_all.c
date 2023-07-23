/*include header file(s) containing necessary dependencies*/
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: - no of args passed into the functions
 * Return: - returns the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum = 0;

	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		sum += va_arg(list, int);
	}

	va_end(list);

	return (sum);
}
