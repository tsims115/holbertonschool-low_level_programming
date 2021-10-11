#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to look in
 * @accept: prefix to check with
 *
 * Return: length of prefix substring in string
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((len > 0) && (s[i] == ' '))
			break;
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
				len++;
	}
	return (len);
}
