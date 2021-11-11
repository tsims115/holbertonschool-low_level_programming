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
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *next_node;
	unsigned int i = 0;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	while (cur_node)
	{
		if (i == idx - 1)
		{
			next_node = cur_node->next;
			cur_node->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
		cur_node = cur_node->next;
		i++;
	}
	return (NULL);
}
