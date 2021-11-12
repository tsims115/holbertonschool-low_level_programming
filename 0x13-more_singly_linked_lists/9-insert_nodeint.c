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

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		if (cur_node == NULL || cur_node->next == NULL)
			return (NULL);
		i++;
		cur_node = cur_node->next;
	}

	new_node->next = cur_node->next;
	cur_node->next = new_node;
	return (new_node);
}
