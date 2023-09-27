/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - fn that prints all elements of a listint_t list
 * @h: - param 1
 * Return: - returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;

		no_of_nodes++;
	}

	return (no_of_nodes);
}

