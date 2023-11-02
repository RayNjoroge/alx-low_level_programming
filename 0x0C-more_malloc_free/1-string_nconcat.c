/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - main fn
 * @s1: - param 1
 * @s2: - param 2
 * @n: - param 3
 *
 * Return: - return NULL if fn fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int str_len;
	unsigned int str_len1;
	char *res;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str_len = strlen(s1);
	str_len1 = strlen(s2);

	if (n >= str_len1)
	{
		n = str_len1;
	}

	res = malloc(str_len + n + 1);

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strncat(res, s2, n);

	res[str_len + n] = '\0';

	return (res);
}
