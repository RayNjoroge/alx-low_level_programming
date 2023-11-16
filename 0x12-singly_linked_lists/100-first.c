/*include header file(s) containing necessary dependencies*/
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void print_str(void) __attribute__((constructor));
/**
 * print_str - function that prints string
 */
void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
