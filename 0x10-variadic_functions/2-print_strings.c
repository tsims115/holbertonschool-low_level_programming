#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: seperator for strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
