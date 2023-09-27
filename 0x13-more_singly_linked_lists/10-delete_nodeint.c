/*include header file(s) containing necessary dependencies*/
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 *                              at index index of a listint_t linked list
 * @head: - double pointer to head node
 * @index: - position of node to be deleted
 * Return: - returns 1 if it succeeds & -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	unsigned int current_index = 0;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	while (current_node != NULL && current_index < index - 1)
	{
		current_node = current_node->next;
		current_index++;
	}

	if (current_node == NULL || current_node->next == NULL
			|| current_index != index - 1)
	{
		return (-1);
	}

	current_node->next = current_node->next->next;

	return (1);
}
