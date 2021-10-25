#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory and sets everything to zero
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	int i;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
