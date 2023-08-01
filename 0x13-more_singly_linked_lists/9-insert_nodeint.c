/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 *				node at a given position
 * @head: - double pointer to head node
 * @idx: - index of the list where the
 *		new node should be added
 * @n: - value being stored in the new node
 * Return: - returns address of hte new node
 *		and NULL if it failed
 *		return NULL if it's not possible to add the new
 *		node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw_node = (listint_t *)malloc(sizeof(listint_t));

	listint_t *current_node = *head;
	unsigned int current_idx = 0;

	if (nw_node == NULL)
	{
		return (NULL);
	}

	nw_node->n = n;

	if (idx == 0)
	{
		nw_node->next = *head;
		*head = nw_node;
	}
	else
	{
		while (current_node != NULL && current_idx < idx - 1)
		{
			current_node = current_node->next;
			current_idx++;
		}

		if (current_node == NULL || current_idx != idx - 1)
		{
			free(nw_node);

			return (NULL);
		}

		nw_node->next = current_node->next;
		current_node = nw_node;
	}

	return (nw_node);
}
