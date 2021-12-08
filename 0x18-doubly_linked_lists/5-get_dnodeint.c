#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a dlistint_t list
 * @head: head of the linked list
 * @index: index of node to return
 * Return: Address of nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cur_node = head;

	if (head == NULL)
		return (NULL);
	for (i = 0; cur_node != NULL; cur_node = cur_node->next)
	{
		if (i == index)
			return (cur_node);
		i++;
	}
	return (NULL);
}
