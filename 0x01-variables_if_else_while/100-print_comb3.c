/*include header containing necessary libraries*/
#include <stdio.h>

/**
 * main - entry point
 * variable declaration of type int
 * for loop to check for conditions
 * if statement to check for more conditions
 * Putchar: to print desired output
 * Return: to exit the program - returns 0 (success)
*/
int main(void)
{
	int digits[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num_of_array = sizeof(digits) / sizeof(digits[0]);
	int i;
	int j;

	for (i = 0; i < num_of_array; i++)
	{
		for (j = i + 1; j < num_of_array; j++)
		{
			putchar(digits[i] + '0');
			putchar(digits[j] + '0');

			if (!(i == num_of_array - 2 && j == num_of_array - 1))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
