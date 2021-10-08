#include "holberton.h"
/**
 * _strcat - concatenates two strings together
 * @dest: stores the concatenated strings
 * @src: string to add on to dest
 *
 * Return: A pointer pointing to dest string
 *
 */

char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i;
	char *ptrA, *ptrB;

	ptrA = dest;
	ptrB = src;

	while (*ptrB != '\0')
	{
		if (*ptrA == '\0')
		{
			while (*ptrB != '\0')
			{
				*ptrA = *ptrB;
				length++;
				ptrB++;
				ptrA++;
			}
		}
		length++;
		ptrA++;
	}
	length++;
	*ptrA = *ptrB;
	for (i = 0; i < length; i++)
	{
		ptrA--;
	}
	ptrA++;
	return (ptrA);
}
