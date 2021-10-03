#include "main.h"
/**
 * _isupper - checks to see if c is upper case
 * @c: character to be checked
 *
 * Return: 1 if upper case and 0 if not uppercase
 *
 */

int _isupper(int c)
{
	int a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
			return (1);
	}
	return (0);
}
