#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums all of the lists data
 * @head: head of list to sum data
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	listint_t *cur_node = head;
	int sum = 0;

	if (!head)
		return (0);
	while (cur_node)
	{
		sum += cur_node->n;
		cur_node = cur_node->next;
	}
	return (sum);
}
