/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _isdigit - entry point
 * @c: - param 1
 * Return: - returns 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
