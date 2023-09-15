/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - main fn
 * @separator: - ptr to a char that acts as a separator
 *		to be printed between nos
 * @n: - no of ints passed as args to the fn
 *
 * Return: - return nos followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
