#include "main.h"
/**
 * _isalpha - checks to see if alphabetic character
 * @c: integer or char to be checked
 *
 * Return: 1 if it is alpha and 0 otherwise
 *
 */

int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
