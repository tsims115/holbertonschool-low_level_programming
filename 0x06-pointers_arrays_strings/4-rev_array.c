#include "holberton.h"
/**
 * reverse_array - reverses array
 * @a: array to reverse
 * @n: number of elements inside array
 *
 *
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int *ptrA, *ptrB, tmp;

	ptrA = a;
	ptrB = a;
	ptrB += n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *ptrB;
		*ptrB = *ptrA;
		*ptrA = tmp;
		ptrB--;
		ptrA++;
	}
}
