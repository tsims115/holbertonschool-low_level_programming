#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: head of list to iterate over
 * @index: index of node to return
 * Return: address of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur_node = head;
	unsigned int i = 0;

	while ((i <= index) && (cur_node != NULL))
	{
		if (i == index)
			return (cur_node);
		i++;
		cur_node = cur_node->next;
	}
	return (NULL);
}
