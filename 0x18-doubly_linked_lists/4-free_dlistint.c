#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur_node;

	while (head != NULL)
	{
		cur_node = head->next;
		free(head);
		head = cur_node;
	}
}
