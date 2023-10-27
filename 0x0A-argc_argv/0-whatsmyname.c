/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fn (entry point)
 * @argc: - param 1 that counts given args
 * @argv: - array of pointers to strings
 *	that are the given args
 *
 * Return: - return 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
