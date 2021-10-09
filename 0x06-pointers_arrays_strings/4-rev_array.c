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
	int *ptrA, *ptrB, ch;

	ptrA = a;
	ptrB = a;
	ptrB += n;

	for (i = 0; i < n / 2; i++)
	{
		ch = *ptrB;
		*ptrB = *ptrA;
		*ptrA = ch;
		ptrB--;
		ptrA++;
	}
}
