#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at given position
 * @head: head of list to add node
 * @idx: index of where new node should be added
 * @n: int to put in new num
 * Return: new_node address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur_node = *head;
	listint_t *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (i <= idx)
	{
		if (cur_node == NULL || cur_node->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		if (i == idx - 1)
		{
			new_node->next = cur_node->next;
			cur_node->next = new_node;
		}
		i++;
		cur_node = cur_node->next;
	}

	free(new_node);
	return (NULL);
}
