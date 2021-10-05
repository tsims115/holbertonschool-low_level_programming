#include "main.h"
/**
 * _strlen - returns length of given string
 * @s: given string to get length
 *
 *
 * Return: Length of s
 *
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s[count] != '\0')
	{
		count++
	}
	return (count);
}
