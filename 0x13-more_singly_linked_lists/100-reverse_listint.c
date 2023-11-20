/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t
 *                      linked list
 * @head: - double pointer to the head node
 *Return: - pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_node = NULL;
	listint_t *current_node = *head;
	listint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		current_node->next = last_node;
		last_node = current_node;
		current_node = next;
	}

	*head = last_node;

	return (*head);
}
