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
	int i = 0;
	int j;

	if (*needle == '\0')
		return (haystack);
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
