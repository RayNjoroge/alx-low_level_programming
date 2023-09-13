/*Include necessasry dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - main fn
 * @name: - pointer to the name
 * @f: - pointer to function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
