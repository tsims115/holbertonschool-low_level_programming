#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenates two strings together
 * @s1: string 1
 * @s2: string 2
 *
 *
 * Return: pointer to new concatenated strings
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *ps;
	int lens1, lens2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);
	lens2 = strlen(s2);
	ps = malloc((sizeof(char) * (lens1 + lens2)) + 1);
	if (ps == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ps[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		ps[lens1 + i] = s2[i];
	ps[lens1 + i] = '\0';

	return (ps);
}
