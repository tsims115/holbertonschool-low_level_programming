#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: number of times to print diagonal line
 *
 *
 *
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
