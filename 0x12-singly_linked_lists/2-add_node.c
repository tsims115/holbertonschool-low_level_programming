#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node at the beginning
 * @head: head of list
 * @str: string to add
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i = strlen(str);

	node = malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);
	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
}
