/*include header file(s) containing necessary dependencies*/
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - function to print elements of list_t
 * @h: - param - pointer
 * Return: - returns no of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;

		count++;
	}

	return (count);
}
