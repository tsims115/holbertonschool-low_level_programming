#include "lists.h"
/**
 * sum_dlistint - sums of all data in the dlistint_t list
 * @head: head of linked list
 * Return: sum of all data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int n;
	dlistint_t *cur_node = head;

	if (head == NULL)
		return (0);
	for (n = 0; cur_node != NULL; cur_node = cur_node->next)
		n += cur_node->n;
	return (n);
}
