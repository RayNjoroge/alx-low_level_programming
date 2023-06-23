/*include header containing necessary functions*/
#include "main.h"

/**
 * _isdigit - entry point
 * @c: - parameter of type int
 * if...else statement to check if c is a digit from 0-9
 * Return: - returns 1 or 0 depending on the set conditions
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
