/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - main fn
 * @separator: - ptr to a character that separates
 *		strings to be printed
 * @n: - no of strings passed as args
 *
 * Return: - returns string followed by a new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
			str = "nil";

		if (!separator)
		{
			printf("%s", str);
		}
		else if (separator && i == 0)
		{
			printf("%s", str);
		}
		else
		{
			printf("%s%s", separator, str);
		}
	}
	printf("\n");

	va_end(args);
}
