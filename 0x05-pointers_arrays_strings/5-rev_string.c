#include "main.h"
#include <stdio.h>
/**
 * rev_string.c
 * @s:  string to save in reverse
 *
 *
 *
 */

void rev_string(char *s)
{
	int i;
	int length = 0;
	char *tmpPtrA, *tmpPtrB, tmpCh;

	tmpPtrA = s;
	tmpPtrB = s;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	for (i = 0; i < length -1; i++)
	{
		tmpPtrB++;
	}
	printf("%d\n", length);
	for (i = 0; i < length / 2; i++)
	{
		tmpCh = *tmpPtrB;
		*tmpPtrB = *tmpPtrA;
		*tmpPtrA = tmpCh;
		tmpPtrA++;
		tmpPtrB--;
	}
	return;
}
