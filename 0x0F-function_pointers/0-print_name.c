/*include header file(s) containing necessary functions*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: - param 1 - name to be printed
 * @f: - param 2 - pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name ==NULL || f == NULL)
		return;

	f(name);
}
