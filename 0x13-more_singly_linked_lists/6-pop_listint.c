#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes first element of the list
 * @head: list to delete head
 * Return: head nodes data
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (n);
}
