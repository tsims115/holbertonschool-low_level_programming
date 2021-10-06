#include "main.h"
/**
 * puts2 - prints every other character of a string starting with first
 * @str: string to be printed
 *
 *
 *
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if ((i % 2) == 0)
			_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
