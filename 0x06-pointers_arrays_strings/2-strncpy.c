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
	int len = 0;

	while (*(src + len) != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
		{
			*(dest + i) = *(src + i);
			break;
		}
		*(dest + i) = *(src + i);
	}
	return (dest);
}
