/*include header file(s) containing necessary functions*/
#include "main.h"

/**
 * swap_int - entry point
 * @a: - param1
 * @b: - param2
 */
void swap_int(int *a, int *b)
{
	int store = *a;
	*a = *b;
	*b = store;
}
