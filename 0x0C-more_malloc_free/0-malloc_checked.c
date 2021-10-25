#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates space in memory
 * @b: how much space to use
 *
 *
 *
 *
 * Return: void pointer to allocated memory
 *
 */

void *malloc_checked(unsigned int b);
{
	void *p;

	p = malloc(b);
	if (b == NULL)
		exit(98);
	return (p);
}
