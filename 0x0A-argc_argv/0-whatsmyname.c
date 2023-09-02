/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fn
 * @argc: - parameter that counts given args
 * @argv: - array of pointers to strings which
 *		are the given arguments
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
