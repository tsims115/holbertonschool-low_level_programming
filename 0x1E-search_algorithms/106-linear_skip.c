#include "search_algos.h"

/**
 * linear_skip - searches using linear skip
 *
 * @list: list to search
 * @value: value to look for
 * Return: pointer to the linked list index of found int
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cur_node;
	skiplist_t * last_node = list;
	int flag = 0;
	int express_idx;

	if (list == NULL)
		return(NULL);
	cur_node = list->express;

	while (cur_node != NULL)
	{
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)cur_node->index, cur_node->n);
		if (cur_node->n == value)
			return (cur_node);
		if (value < cur_node->n)
		{
			printf("Value found between indexes ");
			printf("[%d] and [%d]\n", (int)last_node->index, (int)cur_node->index);
			express_idx = (int)cur_node->index;
			cur_node = last_node;
			flag = 1;
			continue;
		}
		if (flag == 0)
		{
			last_node = cur_node;
			cur_node = cur_node->express;
		}
		if (flag == 1)
		{
			cur_node = cur_node->next;
			if ((int)cur_node->index > express_idx)
				cur_node = NULL;
		}
	}

	return (cur_node);
}
