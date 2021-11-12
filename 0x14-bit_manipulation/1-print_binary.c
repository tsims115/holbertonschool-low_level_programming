#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _pow - returns power of a number
 * @n: number to power
 * @pnum: how much to power that num
 * Return: power of the number
 */
unsigned int _pow(unsigned int n, unsigned int pnum)
{
	unsigned int res = 1;
	unsigned int i;

	if (pnum == 0)
		return (1);
	for (i = 1; i <= pnum; i++)
	{
		res = res * n;
	}
	return (res);
}
/**
 * print_binary - prints the number in binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	for (i = 11; i >= 0; i--)
	{
		if (n >= _pow(2, i))
		{
			flag = 1;
			_putchar('1');
			n = n - _pow(2, i);
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
}
