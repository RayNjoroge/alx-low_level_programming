/*include header file(s) files containing necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 *                      of a listint_t linked list
 * @head: - pointer to head node
 * @index: - represents position of the node to be retrieved
 * Return: - returns nth node
 *              return NULL if node doesn't exit
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_pos = 0;

	listint_t *current_node = head;

	while (current_node != NULL && current_pos < index)
	{
		current_node = current_node->next;

		current_pos++;
	}

	if (current_node != NULL && current_pos == index)
	{
		return (current_node);
	}
	else
	{
		return (NULL);
	}


}
