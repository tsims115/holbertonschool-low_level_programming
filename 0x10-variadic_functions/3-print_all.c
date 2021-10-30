#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format: format of the string to be printed
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	int flag;
	char *s;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		flag = 0;
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			flag = 1;
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			flag = 1;
			break;
		}
		if (flag == 1 && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
