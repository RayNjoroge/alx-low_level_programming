/*include header file(s) containing necessary dependencies*/
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: - pointer to list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}