#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: copy to this variable
 * @src: string to copy
 * @n: copies n amount from src to dest
 * Return: Returns a pointer to dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int length = 0;

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
		length++;
	}

	for (i = 0; i < length; i++)
		dest--;
	return (dest);
}
