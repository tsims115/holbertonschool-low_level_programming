#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - returns number of elements in listint_t list
 * @h: head of listint_t list
 * Return: number of elemets in list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *cur_node = h;
	size_t n;

	for (n = 0; cur_node != NULL; cur_node = cur_node->next)
		n++;
	return (n);
}
