#include "main.h"
/**
 * print_square - prints a square qith the given size
 * @size: size of the square
 *
 *
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			if ((i + 1) != size)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
