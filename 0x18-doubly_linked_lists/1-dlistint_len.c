#include "lists.h"
/**
 * dlistint_len - return number of elements in a linked list
 * @h: head of list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;
	const dlistint_t *node = h;

	for (n = 0; node != NULL; node = node->next)
		n++;
	return (n);
}
