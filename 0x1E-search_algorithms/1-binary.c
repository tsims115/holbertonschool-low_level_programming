#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - seraches for a value bianryly
 * @array: array to search
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, ls, rs, mp;

    ls = 0;
    rs = size - 1;
	if (array == NULL)
		return (-1);
	for (i = (int)size; i >= (int)size / 2; i--)
	{
        if (ls > rs)
            return (-1);
        mp = (ls + rs) / 2;
        printf("(mp: %d array[mp]: %d)Searching in array: ", mp, array[mp]);
		for (j = ls; j <= rs; j++)
        {
            printf("%d", array[j]);
            if (j != rs)
                printf(", ");
        }
        printf("\n");
        if (array[mp] == value)
            return (mp);
        else if (value < array[mp])
            rs = mp - 1;
        else
            ls = mp + 1;
	}
	return -1;
}
