#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: 0 if succesful
 *
 */
int print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
