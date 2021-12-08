#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list to delete node
 * @index: index of node to delete
 * Return: 1 if success or -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cur_node = *head;
	dlistint_t *last_node;
	dlistint_t *next_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		next_node = cur_node->next;
		free(cur_node);
		if (next_node != NULL)
			next_node->prev = NULL;
		*head = next_node;
		return (1);
	}
	for (i = 0; cur_node != NULL; cur_node = cur_node->next)
	{
		if (i == index)
		{
			last_node = cur_node->prev;
			next_node = cur_node->next;
			free(cur_node);
			last_node->next = next_node;
			if (next_node != NULL)
				next_node->prev = last_node;
			return (1);
		}
		i++;
	}
	return (-1);
}
