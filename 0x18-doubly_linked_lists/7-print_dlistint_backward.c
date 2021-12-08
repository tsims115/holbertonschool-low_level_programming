#include "lists.h"
/**
 * print_dlistint_backward - prints list backwards
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *cur_node = h;
	size_t n;

	if (h == NULL)
		return (0);
	while (cur_node->next != NULL)
		cur_node = cur_node->next;
	for (n = 0; cur_node != NULL; cur_node = cur_node->prev)
	{
		printf("%d\n", cur_node->n);
		n++;
	}
	return (n);
}
