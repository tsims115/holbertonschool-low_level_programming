#include  "main.h"
#include <stdio.h>
/**
 * print_array - prints array at n number of elements
 *@a: array to print
 *@n: number of elements to print
 *
 *
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *a);
			break;
		}
		printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
