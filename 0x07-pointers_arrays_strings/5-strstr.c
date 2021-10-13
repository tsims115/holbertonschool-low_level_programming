#include "main.h"

/**
 * _strlen - returns string length
 * @s: string to get length of
 *
 *
 * Return: Lenght of string
 *
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return len;
}

/**
 * _strstr - locates a substring in string
 * @haystack: stack of hay to search
 * @needle: needle to find
 *
 * Return: first occurence of the needle otherwise null
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	if (_strlen(needle) == 0)
		return (0);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == '\0')
					break;
				if (needle[j] == haystack[i + j])
					continue;
				break;
			}
			if (needle[j] == '\0')
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return (0);
}
