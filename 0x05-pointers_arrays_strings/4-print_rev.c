#include "main.h"
/**
 * print_rev - print string to console in reverse
 * @s: string to reverse print
 *
 *
 *
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	for (i = count; i >= 0; --i)
	{
		if (i == count)
		{
			--s;
			continue;
		}
		_putchar(*s);
		--s;
	}
	_putchar('\n');

}
