/*include header - contains necessary libraries*/
#include <stdio.h>

/**
 *main - the entry point
 *char to declare the variables to hold the alphabets in lower and uppercase
 *for loops - containing the conditions to check
 *putchar() - to print the required output and the nextline
 *Return: - to exit the program; returns 0
 */

int main(void)
{
	char uppercase;
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');

	return (0);
}
