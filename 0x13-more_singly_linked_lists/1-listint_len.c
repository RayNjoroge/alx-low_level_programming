/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * listint_len - function that returns the no of elements
 *              in a linked listint_t list
 * @h: - pointer to the head of the list
 * Return: - returns no of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t no_of_nodes = 0;

	while (h != NULL)
	{
		h = h->next;

		no_of_nodes++;
	}

	return (no_of_nodes);
}

