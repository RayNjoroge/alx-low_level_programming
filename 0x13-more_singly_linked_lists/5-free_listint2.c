/*include header file(s) containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: - double pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	current_node = *head;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}

	*head = NULL;
}
