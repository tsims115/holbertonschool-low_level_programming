#include "holberton.h"
/**
 * _strcat - concatenates two strings together
 * @dest: stores the concatenated strings
 * @src: string to add on to dest
 *
 * Return: A pointer pointing to dest string
 *
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + len) = *(src + i);
		len++;
	}

	*(dest + len) = *(src + i);

	return (dest);
}
