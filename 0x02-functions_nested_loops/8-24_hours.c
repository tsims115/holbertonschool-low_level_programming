#include "main.h"
/**
 * jack_bauer - prints the time from 00:00 to 23:59
 *
 *
 * Return: 0 if succesful
 *
 */

void jack_bauer(void)
{
	int i;
	int j;
	int x;
	int y;

	for (x = 0; x <= 2; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			for (j = 0; j <= 5; j++)
			{
				for (i = 0; i <= 9; i++)
				{
					if ((x == 2) && (y > 3))
						break;
					_putchar(x + '0');
					_putchar(y + '0');
					_putchar(':');
					_putchar(j + '0');
					_putchar(i + '0');
					_putchar('\n');
				}
			}
		}
	}
}
