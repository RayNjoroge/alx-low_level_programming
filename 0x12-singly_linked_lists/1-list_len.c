/*include header file(s) containing necessary dependencies*/
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements
 *              in a linked list_t list
 * @h: - parameter - pointer to list_t
 * Return: returns count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}
