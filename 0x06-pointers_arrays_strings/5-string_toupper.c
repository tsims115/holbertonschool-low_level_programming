#include "holberton.h"
/**
 * string_toupper - converts all lowercase letters to uppercase
 * @s: string to convert ot lowercase
 *
 *
 *
 * Return: pointer to upper case string
 *
 */

char *string_toupper(char *s)
{
	char c;
	int len = 0;

	while (*s != '\0')
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			if (*s == c)
			{
				*s = c - 32;
			}
		}
		s++;
		len++;
	}
	s -= len;
	return (s);
}
