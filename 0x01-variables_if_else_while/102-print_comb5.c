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
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
