#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list to delete node
 * @index: index of node to delete
 * Return: 1 if successful and -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur_node = *head;
	listint_t *next_node;
	listint_t *last_node;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (i == index)
	{
		next_node = cur_node->next;
		free(cur_node);
		*head = next_node;
		return (1);
	}

	while (cur_node)
	{
		if (index == i)
		{
			next_node = cur_node->next;
			free(cur_node);
			cur_node = next_node;
			last_node->next = next_node;
			return (1);
		}
		last_node = cur_node;
		cur_node = cur_node->next;
		i++;
	}
	return (-1);
}
