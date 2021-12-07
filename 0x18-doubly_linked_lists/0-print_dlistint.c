#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t n;

	for (n = 0; node != NULL; node = node->next)
	{
		printf("%d\n", node->n);
		n++;
	}
	return (n);
}
