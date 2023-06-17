/*include required header files*/
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
* main - the entry point
* srand(time()) - to generate a random number
* if...else if...else - to test the conditions
* printf - to give the required output
* Return: - returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n);
	}
	return (0);
}
