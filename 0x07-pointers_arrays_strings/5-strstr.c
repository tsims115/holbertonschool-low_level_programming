#include "main.h"
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
	int j;

	while (*haystack != '\0')
	{
		if (needle[0] == *haystack)
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (*(haystack + j) == needle[j])
					continue;
				return (0);
			}
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
