#include "holberton.h"
/**
 *_strcmp - compare two strings
 * @s1: string compared to s2
 * @s2: s1 is compared to this
 *
 * Return: positive, zero, or negative number if s1 is greater, equal, or less
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
