#include "main.h"
/**
 * main - a function that prints out the alphabet in lowercase
 *
 * Return: 0 if runs succesful
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

int main (void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
	return (0);
}