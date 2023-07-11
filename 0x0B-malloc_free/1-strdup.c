/*include header file(s) with necessary funtions*/
#include "main.h"
#include <stdlib.h>

/**
* _strdup - entry point
* @str: - param 1
*
* Return: - returns pointer
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
