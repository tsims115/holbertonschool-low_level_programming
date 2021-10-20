#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - allocates space in memory and copies given string to it
 * @str: string to copy in
 *
 *
 * Return: a pointer to allocated memory / NULL if str = NULL / insufficent mem
 *
 */

char *_strdup(char *str)
{
	int i;
	char *ps;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	len++;
	ps = malloc(len * sizeof(char));
	if (ps == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ps[i] = str[i];
	return (ps);
}
