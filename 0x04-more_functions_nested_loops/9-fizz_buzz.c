/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * i - variable of type int
 * for loop to set conditions to ++ to 100
 * if..else if statements - for setting conditions
 * printf: - to print the output
 * Return: - return 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
