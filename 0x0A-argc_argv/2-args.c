/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: - param 1 - argument count
 * @argv: - param 2 - argument vector
 * i - iterator
 * Return: - returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
