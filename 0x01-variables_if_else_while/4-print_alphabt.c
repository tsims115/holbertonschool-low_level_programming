#include<stdio.h>
/**
 * main - prints alphabet in lowercase excpet e and q
 *
 *
 * Return: 0 if runs succesful
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c == 'e') || (c == 'q'))
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
