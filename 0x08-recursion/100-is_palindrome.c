/*include header file(S) containing necessary functions*/
#include "main.h"

/**
 * pal_eval - entry point
 * @s: - param 1
 * @i: - param 2
 * @len: - param 3
 * Return: - output
 */
int pal_eval(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (pal_eval(s, i + 1, len - 1));
}

/**
 * _strlen - entry point
 * @s: - param 1
 * Return: - output
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome - entry point
 * @s: - param 1
 * Return: output
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (pal_eval(s, 0, _strlen(s)));
}
