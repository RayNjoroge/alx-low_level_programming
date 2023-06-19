/*include header to include the necessary libraries*/
#include <stdio.h>

/**
 * main - entry point
 * variable declaration in an array and initialization
 * for loop - to set the conditions to check for
 * putchar to print the output - single base 10 digits
 * Return: to exit the program; returns 0(success)
*/

int main(void)
{
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num_of_array = sizeof(array) / sizeof(array[0]);
	int i;

	for (i = 0; i < num_of_array; i++)
	{
		putchar(array[i] + '0');
	}
	putchar('\n');

	return (0);
}
