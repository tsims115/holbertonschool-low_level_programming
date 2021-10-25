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
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	if (n >= lens2)
		n = lens2;
	newStr = malloc(sizeof(char) * (lens1 + n + 1));
	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		newStr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		newStr[i + j] = s2[j];
	}
	newStr[i + j] = '\0';
	return (newStr);
}
