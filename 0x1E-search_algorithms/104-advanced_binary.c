#include "search_algos.h"
#include <stdio.h>

/**
 * binary_advance - recursive way to binary advance search for first index
 * @a: array to use
 * @size: size of the array
 * @ls: left side
 * @rs: right side
 * @v: value to search for
 * @fmp: final point to store value of index
 */

void binary_advance(int *a, size_t size, int ls, int rs, int v, int *fmp)
{
	int mp, i;

	mp = (ls + rs) / 2;
	if (ls > rs)
		return;
	else if (ls == rs)
	{
		if (a[mp] == v)
		{
			*fmp = mp;
			return;
		}
	}
	printf("Searching in array: ");
	for (i = ls; i <= rs; i++)
	{
		printf("%d", a[i]);
		if (i != rs)
			printf(", ");
	}
	printf("\n");
	if (a[mp] == v)
	{
		*fmp = mp;
		rs = mp;
	}
	else if (v < a[mp])
		rs = mp;
	else
		ls = mp + 1;
	binary_advance(a, size, ls, rs, v, fmp);
}


/**
 * advanced_binary - searches for a value bianryly
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ls, rs;
	int final_midpoint = -1;
	int *fmp = &final_midpoint;

	ls = 0;
	rs = size - 1;
	if (array == NULL)
		return (-1);
	binary_advance(array, size, ls, rs, value, fmp);
	if (*fmp == -1)
		return (-1);
	return (*fmp);
}
