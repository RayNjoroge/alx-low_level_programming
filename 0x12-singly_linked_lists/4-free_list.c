/*Include necessary dependencies*/
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - main fn
 * @head: - ptr to head of a single linked list
 *
 * Return: - return 0
 */
void free_list(list_t *head)
{
	list_t *cnt_node;

	while ((cnt_node = head) != NULL)
	{
		head = head->next;

		free(cnt_node->str);
		free(cnt_node);
	}
}
