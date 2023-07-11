/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _isupper - entry point
 * @c: - param 1
 * Return: - returns 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
