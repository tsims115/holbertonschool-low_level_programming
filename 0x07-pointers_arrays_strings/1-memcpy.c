#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to mem area dest
 * @dest: copies to this
 * @src: copies n bytes from this
 * @n: number of bytes ti copy from memory area
 * Return: Pointer to destianiton string
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
