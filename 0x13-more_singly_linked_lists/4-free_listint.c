#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free list_t list
 * @head: head of list to free
 */

void free_listint(listint_t *head)
{
	listint_t *cur_node;

	while (head != NULL)
	{
		cur_node = head->next;
		free(head);
		head = cur_node;
	}
}
