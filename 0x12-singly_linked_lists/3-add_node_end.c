#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node to the end of the linked list
 * @head: head of the linked list
 * @str: string to add in the new node
 * Return: address of the new node or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *last = *head;
	unsigned int i = strlen(str);

	node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = node;

	return (node);
}
