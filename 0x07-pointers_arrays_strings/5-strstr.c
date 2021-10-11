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
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (needle[j] == haystack[j])
					continue;
				break;
			}
			if (needle[j] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
