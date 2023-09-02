/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fn
 * @argc: - count of args supplied to the program
 * @argv: - array of pointers to the strings which
 *		are those arguments
 *
 * Return: - return 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
