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
 *	return 1 if the pgm does not receive 2 args
 *	and print Error followed by a new line
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
