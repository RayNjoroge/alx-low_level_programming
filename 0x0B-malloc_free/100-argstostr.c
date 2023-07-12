/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdlib.h>

/**
* argstostr - entry point
* @ac: - param 1
* @av: - param 2
* Return: - returns pointer
*/
char *argstostr(int ac, char **av)
{
	int i, x, y = 0, z = 0;
	char *concat;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		z++;
	}
	z += ac;

	concat = malloc(sizeof(char) * z + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
		{
			concat[y] = av[i][x];
			y++;
		}

		if (concat[y] == '\0')
		{
			concat[y++] = '\n';
		}
	}
	return (concat);
}
