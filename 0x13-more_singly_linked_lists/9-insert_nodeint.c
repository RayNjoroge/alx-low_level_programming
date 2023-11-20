/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 *                              node at a given position
 * @head: - double pointer to head node
 * @idx: - index of the list where the
 *              new node should be added
 * @n: - value being stored in the new node
 * Return: - returns address of hte new node
 *              and NULL if it failed
 *              return NULL if it's not possible to add the new
 *              node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw_node, *current_node;
	unsigned int current_idx = 0;

	if (head == NULL)
		return (NULL);

	nw_node = malloc(sizeof(listint_t));

	if (nw_node == NULL)
	{
		return (NULL);
	}

	nw_node->n = n;
	current_node = *head;

	if (idx == 0)
	{
		nw_node->next = current_node;
		*head = nw_node;

		return (nw_node);
	}

	while (current_node != NULL)
	{
		if (current_idx == idx - 1)
		{
			nw_node->next = current_node->next;
			current_node->next = nw_node;
			return (nw_node);
		}

		current_node = current_node->next;
		current_idx++;
	}

	free(nw_node);

	return (NULL);
}
