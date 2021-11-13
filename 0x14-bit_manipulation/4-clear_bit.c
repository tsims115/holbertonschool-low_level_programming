#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to clear bit
 * @index: index to clear bit at
 * Return: 1 if worked and -1 if error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
