/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _strcpy - entry point
 * @dest: - param1
 * @src: - param2
 * i - variable
 * do...while loop
 * Return: - retunrs dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
