#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search for an int
 * @array: array to search for
 * @size: size of array
 * @cmp: function to use to search
 * Return: if no match or size <= 0 -1, otherwise index of match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if ((!array) || (!cmp))
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	return (-1);
}
