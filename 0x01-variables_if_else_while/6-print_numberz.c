#include<stdio.h>
/**
 * main - prints 0-9 but only uses putchar function
 *
 *
 * Return: 0 if runs succesful
 */

int main(void)
{
	for (int i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
