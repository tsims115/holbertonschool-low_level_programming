#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - prints the number in binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;
	unsigned int res;
	int j;

	if (n == 0)
		_putchar('0');
	for (i = 15; i >= 0; i--)
	{
		res = 1;
		for (j = 1; j <= i; j++)
		{
			if (i == 0)
			{
				res = 1;
				break;
			}
			res = res * 2;
		}
		if (n >= res)
		{
			flag = 1;
			_putchar('1');
			n = n - res;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
}
