#include "holberton.h"
/**
 * _strncat - concatenates two strings but will only use  n bytes
 * @dest: destination string to save result in
 * @src: string to add to dest
 * @n: number of bytes to save from src to dest
 * Return: Return a pointer pointing to dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int length2 = 0;
	int i;

	while (*dest != '\0')
	{
		dest++;
		length++;
	}

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
		{
			break;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
		length2++;
	}

	for (i = 0; i < length + length2; i++)
		dest--;

	return (dest);
}
