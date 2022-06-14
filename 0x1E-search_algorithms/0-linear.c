#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - seraches for a value linearly
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
