/*include header file(s) containing necessary dependencies*/
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 *		followed by a new line
 * @separator: -  string to be printed between the strings
 * @n: - number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *string;

	va_list list;

	va_start(list, n);

	for (m = 0; m < n; m++)
	{
		string = va_arg(list, char *);

		if (!string)
			string = "nil";

		if (!separator)
			printf("%s", string);
		else if (separator && m == 0)
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
	printf("\n");

	va_end(list);
}
