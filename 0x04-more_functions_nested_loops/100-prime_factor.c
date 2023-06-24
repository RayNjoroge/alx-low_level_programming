/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @void: - nothing is returned by function
 * i,n - variables of type unsigned long int
 * for loop - to set the conditions
 * while loop - to set conditions
 * printf: - to print the desired output
 * Return: - returns 0
 */
int main(void)
{
	unsigned long int i;
	unsigned long int n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
		n = n / i;
	}
	printf("%lu\n", n);

	return (0);
}
