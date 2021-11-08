#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - add a new node at the beginning
 * @head: head of list
 * @str: string to add
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = (list_t *)malloc(sizeof(list_t));
	char *s;
	int i;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	node->len = i;
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	node->str = s;
	node->next = (*head);
	*head = node;
	return (*head);
}
