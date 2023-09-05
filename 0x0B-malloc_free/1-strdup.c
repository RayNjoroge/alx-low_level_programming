/*Include necessary file dependencies*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - main fn
 * @str: - param holding the string
 *
 * Return: - returns pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter.
 *	returns NULL is string is NULL
 */
char *_strdup(char *str)
{
	char *str_cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	str_cpy = (char *)malloc(strlen(str) + 1);

	if (str_cpy != NULL)
	{
		strcpy(str_cpy, str);
	}

	return (str_cpy);
}
