/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 * @a: - param1
 * @n: - param2
 * i - variable
 * for loop & if statement
 * printf: - to print output
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
