#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip one to another
 * @n: number to start on
 * @m: number that n needs to be flipped to
 * Return: number of bits needed to flip numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int nm = n ^ m;

	while (nm > 0)
	{
		i++;
		nm &= (nm - 1);
	}
	return (i);
}
