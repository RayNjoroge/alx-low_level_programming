/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * isNumber - main fn
 * @str: - param 1
 *
 * Return: - return 0
 */
int isNumber(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}

		str++;
	}

	return (1);
}

/**
 * mult - main fn
 * @num1: - no 1
 * @num2: - no 2
 *
 * Return: - return 0
 */
long mult(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - main fn
 * @argc: - arg count
 * @argv: - arg vector
 *
 * Return: - return 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	char *str1 = argv[1];
	char *str2 = argv[2];
	int num1, num2;
	long mul;

	if (!isNumber(str1) || !isNumber(str2))
	{
		printf("Error\n");

		return (98);
	}

	num1 = atoi(str1);
	num2 = atoi(str2);

	mul = mult(num1, num2);

	printf("%ld\n", mul);

	return (0);
}
