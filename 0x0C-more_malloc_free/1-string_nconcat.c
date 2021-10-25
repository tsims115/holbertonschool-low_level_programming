#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to write from s2 to s1
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int i;
	unsigned int lens1;
	unsigned int lens2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	lens1 = strlen(s1);
	if (n >= strlen(s2))
	{
		lens2 = strlen(s2);
	}
	else
	{
		lens2 = n;
	}

	newStr = malloc((sizeof(char) * (lens1 + lens2)) + 1);
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		newStr[i] = s1[i];
	for (i = 0; i <= n; i++)
		newStr[lens1 + i] = s2[i];
	newStr[lens1 + i] = '\0';
	return (newStr);
}
