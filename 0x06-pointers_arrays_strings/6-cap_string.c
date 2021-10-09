#include "holberton.h"
/**
 * cap_string - capitalize every word in string
 * @s: string to capitalize
 *
 *
 * Return: pointer to capitalized string
 *
 */

char *cap_string(char *s)
{
	int len = 0;

	if ((*s >= 'a') && (*s <= 'z'))
		*s -= 32;
	while (*s != '\0')
	{
		if ((*s == ' ') || (*s == '\t') || (*s == '\n'))
			if ((*(s + 1) >= 'a') && (*(s + 1) <= 'z'))
				*(s + 1) -= 32;
		if ((*s == ',') || (*s == ';') || (*s == '.'))
			if ((*(s + 1) >= 'a') && (*(s + 1) <= 'z'))
				*(s + 1) -= 32;
		if ((*s == '!') || (*s == '?') || (*s == '"'))
			if ((*(s + 1) >= 'a') && (*(s + 1) <= 'z'))
				*(s + 1) -= 32;
		if ((*s == '(') || (*s == ')') || (*s == '{') || (*s == '}'))
			if ((*(s + 1) >= 'a') && (*(s + 1) <= 'z'))
				*(s + 1) -= 32;
		len++;
		s++;
	}
	s -= len;
	return (s);
}
