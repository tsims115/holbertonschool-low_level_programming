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
	int j = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += a[i];
		sum2 += a[j];
		a += size;
		j--;
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
