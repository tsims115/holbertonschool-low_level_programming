#include "main.h"
/**
 * print_last_digit - prints last digit from given number
 * @num: num to take last digit from
 *
 * Return: the value of last digit
 *
 */

int print_last_digit(int num)
{
	if (num == -2147483648)
	{
		num = 8;
		_putchar(num + '0');
		return (num);
	}
	if (num < 0)
	{
		num = num * -1;
		num = num % 10;
		_putchar(num + '0');
		return (num);
	}
	num = num % 10;
	_putchar(num + '0');
	return (num);
}
