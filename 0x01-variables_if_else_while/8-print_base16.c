/*include header containing the necessary libraries*/
#include <stdio.h>

/**
 * main - entry point
 * for loop to define the conditions to be checked
 * if...else statement to define further conditions
 * putchar() - to print the result followed by a new line
 * Return: - to exit the program; returns 0 (success)
*/

int main(void)
{
	int hx_nos;

	for (hx_nos = 0; hx_nos <= 15; hx_nos++)
	{
		if (hx_nos < 10)
		{
			putchar(hx_nos + '0');
		}
		else
		{
			putchar(hx_nos - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
