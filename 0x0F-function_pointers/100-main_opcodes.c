/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - main fn
 * @argc: - arg count
 * @argv: - arg vector
 *
 * Return: - return 0
 */
int main(int argc, char *argv[])
{
	int num_of_bytes;
	int i;
	int (*address)(int, char **) = main;

	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_of_bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == num_of_bytes - 1)
			continue;
		printf(" ");

		address++;
	}
	printf("\n");

	return (0);
}
