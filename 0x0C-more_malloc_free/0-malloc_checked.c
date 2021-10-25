#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates space in memory
 * @b: how much space to use
 * Return: void pointer to allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (ptr);
}
