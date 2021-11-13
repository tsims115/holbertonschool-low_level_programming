#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_binary - prints the number in binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
