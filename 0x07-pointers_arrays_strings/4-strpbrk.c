#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to look for in string to search
 *
 * Return: 0 if nothing found otherwise a pointer to first occurence
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (0);
}
