#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_list - free a list_t
 * @head: start of the list
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}
