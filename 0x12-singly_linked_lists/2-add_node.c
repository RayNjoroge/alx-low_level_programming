/*include header file(s) containing necessary dependencies*/
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: - param 1 - pointer to the list_t list
 * @str: - param 2 - string to add to node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_node;
	unsigned int length = 0;

	while (str[length])
		length++;

	nw_node = malloc(sizeof(list_t));

	if (!nw_node)
		return (NULL);

	nw_node->str = strdup(str);
	nw_node->len = length;
	nw_node->next = (*head);
	(*head) = nw_node;

	return (*head);
}

