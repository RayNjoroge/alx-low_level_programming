/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: - param 1 - gets no of elements given
 * @argv: param 2 - aray of pointers to the arguments
 * Return: - returns 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && n2 == 0) ||
		(*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
