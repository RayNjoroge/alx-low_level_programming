/*include header with necessary libraries*/
#include <stdio.h>

/**
 *main - the entry point
 *char - to declare a variable to contain the alphabet
 *for loop - to check conditions
 *if...else statement - to check further conditions
 *Exit: - to exit the loop
 *putchar() - to print the output followed by the next line
 *Return: - to exit the program
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
