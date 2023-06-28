/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * pwd - variable
 * for loop & if...statements
 * Return: - return 0
 */
int main(void)
{
	int PASSWORD_LENGTH = 10;

	srand(time(NULL));
	int i;

	char pwd[PASSWORD_LENGTH + 1];

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_num = rand() % 62;

		if (random_num < 26)
		{
			pwd[i] = 'A' + random_num;
		}
		else if (random_num < 52)
		{
			pwd[i] = 'a' + (random_num - 26);
		}
		else
		{
			pwd[i] = '0' + (random_num - 52);
		}
	}
	pwd[PASSWORD_LENGTH] = '\0';

	printf("Random Password: %s\n", pwd);

	return (0);
}
