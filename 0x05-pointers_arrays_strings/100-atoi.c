/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _atoi - entry point
 * @s: - param of type cahr
 * i, ui, min, is_i - variables
 * while loop & if statements
 * Return: - returns unsigned int
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int ui = 0;
	int min = 1;
	int is_i = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			is_i = 1;
			ui = (ui * 10) + (s[i] - '0');
			i++;
		}
		if (is_i == 1)
		{
			break;
		}
		i++;
	}
	ui *= min;

	return (ui);
}
