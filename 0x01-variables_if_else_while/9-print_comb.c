/*include header containing necessary libraries*/
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * int to declare variable to hold the single digit numbers
 * for loop to define the conditions to check for
 * Putchar: to print out the output as required
 * If...else statement to check for more condition(s)
 * Exit: to exit the function; exits 0(successfully)
 * Return: to exit the program
 *
*/
int main(void)
{
	int sdgt_nos;

	for (sdgt_nos = 0; sdgt_nos <= 9; sdgt_nos++)
	{
		putchar(sdgt_nos + '0');

		if (sdgt_nos != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			exit(0);
		}
	}
	putchar('\n');

	return (0);
}
