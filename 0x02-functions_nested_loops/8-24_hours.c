/*include header containing the necessary functions*/
#include "main.h"

/**
 * jack_bauer - entry point
 * @void: - does not return any value
 * variable declaration
 * for loop to check the conditions
 * _putchar - to print the required output
 */
void jack_bauer(void)
{
	int hour;
	int minutes;

	for (hour = 0; hour < 24; hour++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
