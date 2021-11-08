#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end - add a node to the end of the linked list
 * @head: head of the linked list
 * @str: string to add in the new node
 * Return: address of the new node or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *last;
	char *s;
	int i;

	last = *head;
	node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	node->str = s;
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
