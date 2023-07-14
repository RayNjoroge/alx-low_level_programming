/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: - param 1
 * @argv: - param 2
 * Return: - returns 0
 */
int main(int argc, char *argv[])
{
	int cents, count, i, no_of_coins;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}

	no_of_coins = sizeof(coins) / sizeof(coins[0]);

	count = 0;
	for (i = 0; i < no_of_coins; i++)
	{
		count = count + cents / coins[i];
		cents = cents % coins[i];
	}
	printf("%d\n", count);

	return (0);
}
