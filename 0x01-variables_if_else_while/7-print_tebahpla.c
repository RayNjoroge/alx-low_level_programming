/*include header - containing the necessary libraries*/
#include <stdio.h>

/**
 * main - the entry point
 * define the character variable to hold the values
 * for loop to define the conditions
 * printf - to output the result followed by a new line
 * Return: - exit the program; returns 0 (success)
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
