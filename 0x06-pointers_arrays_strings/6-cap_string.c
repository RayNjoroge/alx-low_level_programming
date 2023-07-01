/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * cap_string - entry point
 * @ptr: - param 1
 * count - variable
 * if statements
 * Return: - returns ptr
 */

char *cap_string(char *ptr)
{
	int count;

	count = 0;
	while (ptr[count] != '\0')
	{
		if (ptr[0] >= 97 && ptr[0] <= 122)
		{
			ptr[0] = ptr[0] - 32;
		}

		if (ptr[count] == ' ' || ptr[count] == '\t' || ptr[count] == '\n'
			|| ptr[count] == ',' || ptr[count] == ';' || ptr[count] == '.'
			|| ptr[count] == '!' ||  ptr[count] == '?'
			|| ptr[count] == '"' || ptr[count] == '(' || ptr[count] == ','
			|| ptr[count] == ')' || ptr[count] == '{' || ptr[count] == '}')
		{
			if (ptr[count + 1] >= 97 && ptr[count + 1] <= 122)
			{
				ptr[count + 1] = ptr[count + 1] - 32;
			}
		}
		count++;
	}
	return (ptr);
}
