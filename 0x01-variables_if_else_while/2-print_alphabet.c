#include<stdio.h>
/**
 * main - prints alphabet in lowercase
 *
 *
 * Return: 0 if runs succesful
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
