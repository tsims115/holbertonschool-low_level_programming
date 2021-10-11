#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: To fill the first n bytes of buffer s with constant byte b
 * @b: constant byte to fill the buffer s
 * @n: number of bytes to fill the buffer
 * Return: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
