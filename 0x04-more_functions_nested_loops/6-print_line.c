#include "main.h"
/**
 * print_line - prints a line to the terminal
 * @n: number of times the character - to be printed
 *
 *
 *
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('-');
		}
	}
	_putchar('\n');
}
