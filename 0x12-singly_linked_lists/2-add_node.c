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
	char *s;
	unsigned int i;

	node = (list_t *)malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}
	s = strdup(str);
	if (!s)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	node->len = i;
	node->str = s;
	node->next = *head;
	*head = node;
	return (node);
}
