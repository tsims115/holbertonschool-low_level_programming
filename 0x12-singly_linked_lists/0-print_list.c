#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of list to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n;
	const list_t *p;

	p = h;
	n = 0;
	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0]: (nil)\n");
			p = p->next;
			n++;
			continue;
		}
		printf("[%d] %s\n",p->len, p->str);
		p = p->next;
		n++;
	}
	return (n);
}
