#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of a dlistint_t list
 * @head: head of list
 * @n: number to add in new_node
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *cur_node = *head;

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (cur_node->next != NULL)
		cur_node = cur_node->next;
	cur_node->next = new_node;
	new_node->prev = cur_node;
	return (new_node);
}
