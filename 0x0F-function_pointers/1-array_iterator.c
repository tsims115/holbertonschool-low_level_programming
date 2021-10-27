#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a given function on every element of the array
 * @array: array to iterate over
 * @size: size of the array
 * @action: function to use on every element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((!array) || (!size) || (!action))
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
