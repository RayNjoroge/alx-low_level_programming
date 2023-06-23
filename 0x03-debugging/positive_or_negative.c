/*include header - containing necessary function libraries*/
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - entry point
 * @i: parameter of type int
 * if...else statement to set conditions to be checked for
 * Printf: to print the desired output
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else if (i > 0)
	{
		printf("%d is positive", i);
	}
	else
	{
		printf("%d is zero", i);
	}
	printf("\n");
}
