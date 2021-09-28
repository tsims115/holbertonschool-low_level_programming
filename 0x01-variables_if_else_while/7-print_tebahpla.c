#include<stdio.h>
/**
 * main - prints alphabet in lowercase but in reverse
 *
 *
 * Return: 0 if runs succesful
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
