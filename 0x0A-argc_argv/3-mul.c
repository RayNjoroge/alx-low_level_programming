/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: - param 1
 * @argv: - param 2
 * Return: - returns 0
 */
int main(int argc, char *argv[])
{
	int mult = 0;
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	mult = n1 * n2;

	printf("%d\n", mult);

	return (0);
}
