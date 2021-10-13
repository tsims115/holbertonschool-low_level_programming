#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printsd the sum of the two diagonals of a square matrix
 * @a: multi-dimesional array to get sums of
 * @size: size of the matrix, top to bottom, left to right, and diagonal
 *
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;
	int len = 0;

	while (i < size)
	{
		sum1 += a[j];
		a += size;
		len += size;
		j++;
		i++;
	}
	a -= len;
	j = size - 1;
	i = 0;
	while (i < size)
	{
		sum2 += a[j];
		i++;
		a += size;
		j--;
	}
	printf("%d, %d\n", sum1, sum2);
}
