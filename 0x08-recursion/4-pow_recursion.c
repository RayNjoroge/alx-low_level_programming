/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: - param 1
 * @y: - param 2
 * if statement
 * Return: - returns -1 to indicate an error, 1 for base case
 * & output
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
