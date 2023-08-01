/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n)
 * @head: - double pointer to the head node
 * Return: - returns the head node's data (n)
 *		return 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int store = (*head)->n;

	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;

	free(temp);

	return (store);
}
