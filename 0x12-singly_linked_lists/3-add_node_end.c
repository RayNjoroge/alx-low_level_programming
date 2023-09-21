/*include header file(s) containing necessary dependencies*/
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node
 *              at the end of a list_t list
 * @head: - pointer to list_t list
 * @str: - string to put into the new node
 * Return: returns the address of the new element
 *              or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_node;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	nw_node = malloc(sizeof(list_t));

	if (!nw_node)
		return (NULL);

	nw_node->str = strdup(str);
	nw_node->len = length;
	nw_node->next = NULL;

	if (*head == NULL)
	{
		*head = nw_node;

		return (nw_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nw_node;

	return (nw_node);


}

