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

	while (*src != '\0')
	{
		if (*dest == '\0')
		{
			for (i = 0; i < n; i++)
			{
				*dest = *src;
				length++;
				length2++;
				src++;
				dest++;
				if (*src == '\0')
				{
					*dest = '\0';
					break;
				}
			}
		}
		length++;
		dest++;
	}

	length++;
	*dest = '\0';

	for (i = 0; i < length - 1; i++)
		dest--;
	for (i = 0; i < length2 - 1; i++)
		src--;

	return (dest);
}
