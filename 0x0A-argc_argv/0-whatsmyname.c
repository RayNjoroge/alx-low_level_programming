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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
