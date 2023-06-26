/*include header file(s) containing necessary functions */
#include "main.h"

/**
 * _strlen - entry point
 * @s: - param of type char
 * str_length - variable to hold value of the length
 * while loop - to ensure check is done until end of string
 * if TRUE increment up to NULL point
 * Return: - length of string
 */
int _strlen(char *s)
{
	int str_length = 0;

	while (s[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}
