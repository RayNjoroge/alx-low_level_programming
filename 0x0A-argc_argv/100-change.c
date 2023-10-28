/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fn
 * @argc: - param 1
 * @argv: - param 2
 *
 * Return: - return 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int no_of_coins;
	int count;
	int i;

	if (argc != 2)
	{
		printf("Error\n");

		return (0);
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
