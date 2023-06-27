/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * rev_string - entry point
 * @s: - param of type char
 * str_len, i, half & temp - variables
 * while loop & for loop - to set conditions to check for
 */
void rev_string(char *s)
{
	int str_len;
	int i;
	int half;
	char temp;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
	;
	i = 0;
	half = str_len / 2;

	while (half--)
	{
		temp = s[str_len - i - 1];
		s[str_len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
