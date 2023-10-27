/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * main - main fn
 * @argc: - param 1
 * @argv: - param 2
 *
 * Return: - return 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	bool isNo;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		isNo = true;

		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				isNo = false;

				break;
			}
		}

		if (!isNo)
		{
			printf("Error\n");

			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
