#include "search_algos.h"

/**
 * linear_skip
 *
 * @list: list to search
 * @value: value to look for
 * Return: pointer to the linked list index of found int
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *cur_node;

    if (list == NULL)
        return(NULL);
    cur_node = list;

    while (cur_node != NULL)
    {
        
    }

    return (cur_node);
}
