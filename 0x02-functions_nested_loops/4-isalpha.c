/*include header with the necessary functions*/
#include "main.h"

/**
 *_isalpha - the entry point
 *@c: parameter passed by the function
 *if...else statement to set the conditions to be checked
 *Return: - either 1 or 0 depending on the conditions
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
