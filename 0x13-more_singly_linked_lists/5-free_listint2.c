#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free list_t list
 * @head: head of list to free
 */

void free_listint2(listint_t **head)
{
	listint_t *cur_node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		cur_node = (*head)->next;
		free(*head);
		*head = cur_node;
	}
	free(cur_node);
	*head = NULL;
}
