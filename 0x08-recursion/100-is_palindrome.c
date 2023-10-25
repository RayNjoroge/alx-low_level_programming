/*Include necessary file dependencies*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*fn prototype*/
int palindrome_recursion(char *s, int beg, int end);

/**
 * palindrome_recursion - main fn
 * @s: - param 1
 * @beg: - param 2
 * @end: - param 3
 *
 * Return: - return 0
 */
int palindrome_recursion(char *s, int beg, int end)
{
	if (beg >= end)
	{
		return (1);
	}

	if (s[beg] != s[end])
	{
		return (0);
	}

	return (palindrome_recursion(s, beg + 1, end - 1));
}

/**
 * is_palindrome - main fn
 * @s: - param 1
 *
 * Return: - return 0
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	return (palindrome_recursion(s, 0, len - 1));
}
