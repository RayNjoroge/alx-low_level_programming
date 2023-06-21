/*include header with necessary functions*/
#include "main.h"

/**
 * _islower - entry point
 *@c: - parameter to be checked
 * declare variable to hold value
 * if...else statement to set the conditions to check for
 * Return: - to exit the loops - with 1 and 0 depending on the conditions
 */
int _islower(int c)
{
	c = 'a';

	if (_islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
