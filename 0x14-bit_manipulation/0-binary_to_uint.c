#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts binary number string to unsigned int
 * @b: binary char * to convert to unsigned int
 * Return: 0 if be is NULL or contains a char not 0/1 otherwise converted num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (b[j] != '\0')
		j++;
	j--;
	for (i = 1; j >= 0; i *= 2)
	{
		if (b[j] == '1')
			res += i;
		if ((b[j] != '0') && (b[j] != '1'))
			return (0);
		j--;
	}
	return (res);
}
