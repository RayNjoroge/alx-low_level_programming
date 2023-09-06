/*Include necessary file dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "main.h"

/**
 * main - main fn
 * @argc: - argument count
 * @argv: - argument variable/vector
 *
 * Return: - returns 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
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

		for (j = 0; argv[i][j] != '\0'; j++)
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
