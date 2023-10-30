/*include header file(s) containing necessary functions*/
#include "main.h"
#include <stdlib.h>

/**
 * word_cnt - entry point
 * @s: - param 1
 * Return: - returns no. of words
 */

int word_cnt(char *s)
{
	int i, j, k;

	i = 0;
	k = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}
/**
 * strtow - entry point
 * @str: - param 1
 * Return: - returns pointer
 */
char **strtow(char *str)
{
	char **matrix, *temp;
	int i, y = 0, length = 0, wrds, j = 0, beg, end;

	while (*(str + length))
		length++;

	wrds = word_cnt(str);
	if (wrds == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (wrds + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				temp = (char *) malloc(sizeof(char) * (j + 1));
				if (temp == NULL)
					return (NULL);

				while (beg < end)
					*temp++ = str[beg++];
				matrix[y] = temp - j;
				y++;
				j = 0;
			}
		}
		else if (j++ == 0)
			beg = i;
	}
	matrix[y] = NULL;

	return (matrix);
}
