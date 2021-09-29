#include "main.h"
/**
 * _islower - checks to see if the input char is lowercase
 *@c: the character to check if lowercase
 *
 * Return: 1 if lowercase and 0 otherwise
 *
 */

int _islower(char c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
