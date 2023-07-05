/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 * @a: - param 1
 * @size: - param 2
 * i, sum, sum1 - variables
 * for loop
 *Printf: - prints output
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum, sum1);
}
