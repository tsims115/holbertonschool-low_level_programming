#include "main.h"
/**
 * _strcpy - copies string to another string
 * @dest: destination of string cpy
 * @src: String to copy
 *
 * Return: string to copy
 *
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	char *string = src;

	while (*src != '\0')
	{
		*dest = *src;
		length++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (string);
}
