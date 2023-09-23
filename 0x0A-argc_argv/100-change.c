/*Include necessary file dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main fn
 * @argc: - arg count
 * @argv: - arg vector/variable
 * Return: - returns 0
 *		return 1 if the number of arguments passed
 *		to your program is not exactly 1
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	int cents;
	int coins[] = {25, 10, 5, 2, 1};
	int coin_cnt[5] = {0};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			coin_cnt[i]++;
		}
	}
	printf("%d %d %d %d %d\n", coin_cnt[0], coin_cnt[1],
			coin_cnt[2], coin_cnt[3], coin_cnt[4]);

	return (0);
}
