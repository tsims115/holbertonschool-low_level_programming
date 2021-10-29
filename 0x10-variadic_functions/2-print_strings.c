#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
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

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%s\n", va_arg(args, const char *));
			break;
		}
		if (va_arg(args, const char *) == NULL)
			printf("(nil)%s", separator);
		printf("%s%s", va_arg(args, const char *), separator);
	}
}
