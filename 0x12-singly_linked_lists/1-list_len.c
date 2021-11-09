#include <stddef.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a linked list
 * @h: head of linked list
 * Return: number of elements in a list
 *
 */

size_t list_len(const list_t *h)
{
	const list_t *p;
	size_t n = 0;

	for (p = h; p != NULL; p = p->next)
		n++;
	return (n);
}
