#include "main.h"
/**
 * print_sign - prints the sign of the number or prints 0 if 0
 * @n: variable to check the sign
 *
 * Return: 1 if positive, 0 if 0, and -1 if negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
