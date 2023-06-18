/*include the necessary libraries*/
#include <stdio.h>

/**
 *main - this is the entry point
 *declare a variable to hold the individual letters of the alphabet
 *for loop - to define the conditions to be checked
 *putchar() - to print the value of the variable(alphabet)
 *Return: - to exit the program; returns 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	return (0);
}
