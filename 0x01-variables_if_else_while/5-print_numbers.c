/*include header - to include necessary libraries*/
#include <stdio.h>

/**
 * main - entry point
 * char to define variable to hold the base 10 digits
 * for loop to check the conditions
 * print()/ putchar() - to print the digits
 * Return: - to exit the program; returns 0 (success)
*/

int main(void)
{
	char sngle_dgt;

	for (sngle_dgt = '0'; sngle_dgt <= '9'; sngle_dgt++)
	{
		printf("%c", sngle_dgt);
	}
	printf("\n");

	return (0);
}
