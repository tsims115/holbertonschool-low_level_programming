#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string to be printed half of
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int i;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}

	for (i = length; i >= 0; i--)
		str--;

	for (i = 0; i <= length; i++)
	{
		if ((length % 2) == 0)
		{
			if (i > (length / 2))
				_putchar(*str);
		}
		else
		{
			if (i > ((length + 1) / 2))
				_putchar(*str);
		}
		str++;
	}

	_putchar('\n');
}
