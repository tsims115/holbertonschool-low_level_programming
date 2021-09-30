#include "main.h"
/**
 * times_table - prints out the 9 times table starting with 0
 *
 *
 *
 *
 */

void times_table(void)
{
	int i;
	int j;
	int first;
	int second;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i * j) >= 10)
			{
				first = i * j;
				while (first >= 10)
					first /= 10;
				second = i * j;
				second = second % 10;
				_putchar(first + '0');
				_putchar(second + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				continue;
			}
			_putchar(i * j + '0');
			if (j == 9)
				continue;
			_putchar(',');
			_putchar(' ');
			if (((j + 1) * i) >= 10)
				continue;
			_putchar(' ');
		}
		_putchar('\n');
	}
}
