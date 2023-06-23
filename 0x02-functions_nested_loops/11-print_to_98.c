/*include header containing hte necessary functions*/
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - entry point
 * @n: parameter of type int
 * for loops for setting conditions to be checked for
 * _putchar: - to print the desired output
 */
void print_to_98(int n)
{
	if (n == 0)
	{
		for (; n <= 98; n++)
		{
		putchar(n);
		putchar(',');
		putchar(' ');
		putchar('\n');
		}
		if (n == 98)
		{
			printf("%d", n);
			putchar('\n');
		}
		else if (n > 98)
		{
			for (; n >= 98; n--)
			{
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
			putchar('\n');
		}
		else if (n < 0)
		{
			for (; n <= 98; n++)
			{
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
			putchar('\n');
		}

	}
}
