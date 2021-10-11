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
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	return (s);
}
