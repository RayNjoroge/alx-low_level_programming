/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 *		the beginning of a listint_t list
 * @head: - double pointer to head pointer of the linked list
 * @n: - value to be added to the list as a new node
 * Return: - returns address of the new element,
 *		or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node =  (listint_t *)malloc(sizeof(listint_t));

	if (nw_node == NULL)
	{
		return (NULL);
	}

	nw_node->n = n;

	nw_node->next = *head;

	*head = nw_node;

	return (nw_node);
}
