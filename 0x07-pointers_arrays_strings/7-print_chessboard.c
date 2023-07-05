/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * print_chessboard - entry point
 * @a: - param 1
 * for loop
 * _putchar: - prints output
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
