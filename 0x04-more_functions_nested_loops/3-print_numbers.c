#include "main.h"
/**
 * print_numbers - prints 0-9 to the console followed by a newline
 *
 *
 *
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
