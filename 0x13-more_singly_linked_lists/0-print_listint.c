#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all elements on the list
 * @h: head of list to iterate over
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cur_node;
	size_t n;

	n = 0;
	for (cur_node = h; cur_node != NULL; cur_node = cur_node->next)
	{
		n++;
		printf("%d\n", cur_node->n);
	}
	return (n);
}
