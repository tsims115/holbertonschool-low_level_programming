#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary - searches for a value bianryly
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i, j, ls, rs, mp, fmp;

	fmp = -1;
	ls = 0;
	rs = size - 1;
	if (array == NULL)
		return (-1);
	for (i = (int)size; i >= (int)size / 2; i--)
	{
		if (ls >= rs)
			break;
		mp = (ls + rs) / 2;
		printf("Searching in array: ");
		for (j = ls; j <= rs; j++)
		{
			printf("%d", array[j]);
			if (j != rs)
				printf(", ");
		}
		printf("\n");
		if (array[mp] == value)
		{
			fmp = mp;
			rs = mp;
		}
		else if (value < array[mp])
			rs = mp - 1;
		else
			ls = mp + 1;
	}
	if (fmp == -1)
		return (-1);
	return (fmp);
}
