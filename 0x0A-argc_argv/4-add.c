/*incude header file(s) containing necessary functions*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: - param 1
 * @argv: - param 2
 * Return:- returns 0
 */
int main(int argc, char *argv[])
{
	int add = 0;
	int i;
	int j;
	int no;

	if (argc < 2)
	{
		printf("0\n");

		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");

				return (1);
			}
		}

		no = atoi(argv[i]);

		if (no > 0)
		{
			add = add + no;
		}
	}
	printf("%d\n", add);

	return (0);
}
