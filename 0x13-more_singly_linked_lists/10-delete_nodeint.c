/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
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
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);

		return (1);
	}

	while (current_node != NULL && current_index < index)
	{
		prev = current_node;
		current_node = current_node->next;
		current_index++;
	}

	if (current_node == NULL)
		return (-1);

	prev->next = current_node->next;
	free(current_node);

	return (1);
}
