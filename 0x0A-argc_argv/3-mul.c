/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fn
 * @argc: - count of the arguments supplied to the pgm
 * @argv: - array of pointers to the strings which
 *		are the given args
 * Return: - return 1 if the pgm does not receive 2 args
 *		and print Error followed by a new line
 */
int main(int argc, char *argv[])
{
	int no1;
	int no2;

	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);

	result = no1 * no2;

	printf("%d\n", result);

	return (0);
}
