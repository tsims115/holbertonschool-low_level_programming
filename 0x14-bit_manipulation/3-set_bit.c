#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set to 1
 * @index: index of the value of a bit tp set to 1
 * Return: 1 if it worked and -1 if it did not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);
	*n |= (1 << index);
	return (1);
}
