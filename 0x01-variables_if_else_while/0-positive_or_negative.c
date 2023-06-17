/*include necessary header files*/
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main  - entry point.
 * @n: to hold the value of the random number
 * the srand(time()) - for generating random number
 * printf - prints the value of n.
 * the if else statement - to test the conditions
 * Return: - returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d\n", n);

	if (n < 0)
	{
		printf("The number is negative\n");
	}
	else if (n > 0)
	{
		printf("The number is positive\n");
	}
	else
	{
		printf("The number is zero\n");
	}

	return (0);
}
