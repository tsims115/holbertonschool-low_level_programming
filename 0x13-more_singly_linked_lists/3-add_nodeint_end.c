#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds an int node to the end of a listint_t list
 * @head: head of linked list
 * @n: int to put into new node
 * Return: Address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *cur_node;

	if (!new_node)
	{
		free(new_node);
		return (new_node);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	for (cur_node = *head; cur_node != NULL; cur_node = cur_node->next)
		if (cur_node->next == NULL)
		{
			cur_node->next = new_node;
			break;
		}
	return (new_node);
}
