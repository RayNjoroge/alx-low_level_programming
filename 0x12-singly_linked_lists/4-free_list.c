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
	list_t *cnt = head;
	list_t *nxt_node;

	while (cnt != head)
	{
		nxt_node = cnt->next;

		free(cnt->str);
		free(cnt);

		cnt = nxt_node;
	}
}
