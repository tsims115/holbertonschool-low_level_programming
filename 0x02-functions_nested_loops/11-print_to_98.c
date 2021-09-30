#include "main.h"

/**
 * print_to_98 - check the code
 *@n: starting number for code
 *
 *
 */
void print_to_98(int n)
{
	int first;
	int second;

	if (n != 98)
	{
		while (n != 98)
		{
			if (n < 98)
			{
				if (n >= 10)
				{
					first = n;
					while (first >= 10)
						first /= 10;
					second = n % 10;
					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (n < 0)
				{
					_putchar('-');
					if (n <= -10)
					{
						first = n * -1;
						while ( first >= 10)
							first /= 10;
						second = n * -1;
						second = second % 10;
						_putchar(first + '0');
						_putchar(second + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(n * -1 + '0');
						_putchar(',');
						_putchar(' ');
					}
					n += 1;
				}
				else
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
					n += 1;
				}
				n += 1;
			}
			else
			{
				first = n;
				while (first >= 10)
					first /= 10;
				second = n % 10;
				_putchar(first + '0');
				_putchar(second + '0');
				_putchar(',');
				_putchar(' ');
				n -= 1;
			}
		}
		 first = n;
		 while (first >= 10)
			 first /= 10;
		 second = n % 10;
		 _putchar(first + '0');
		 _putchar(second + '0');
		_putchar('\n');
	}
	else
	{
		first = n;
		while (first >= 10)
			first /= 10;
		second = n % 10;
		_putchar(first + '0');
		_putchar(second + '0');
		_putchar('\n');
	}
}
