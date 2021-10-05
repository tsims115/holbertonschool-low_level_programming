#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *@a: First value to be swapped
 *@b: Second value to be swapped
 *
 *
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
