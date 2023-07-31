/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 *			at the end of a listint_t list
 * @head: - double pointer to the ponter to head pointer
 * @n: - value of the new node to be added
 * Return: - returns address of the new element,
 *		or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw_node = (listint_t *)malloc(sizeof(listint_t));

	if (nw_node == NULL)
	{
		return (NULL);
	}

	nw_node->n = n;

	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;
	}
	else
	{
		listint_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->next = nw_node;
	}

	return (nw_node);
}
