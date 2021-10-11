#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode in rot13
 *
 *
 *
 * Return: pointer to the string s
 *
 */

char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
				s[i] = rot13[j];
		}
	}
	return (s);
}
