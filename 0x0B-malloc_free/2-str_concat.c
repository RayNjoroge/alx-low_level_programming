/*Include necessary file dependencies*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - main fn
 * @s1: - string 1
 * @s2: - string 2
 *
 * Return: - returns pointer point to a newly allocated space in memory
 *              which contains the contents of s1, followed by the
 *              contents of s2, and null terminated
 *      return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	size_t total_len;
	char *concat_str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2 + 1;

	concat_str = (char *)malloc(total_len);

	if (concat_str != NULL)
	{
		strcpy(concat_str, s1);
		strcat(concat_str, s2);
	}

	return (concat_str);
}
