#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - Entry Point
 * @format: comma space
 */
void print_all(const char * const format, ...)
{
	va_list parametros;
	int o = 0;
	int i = 0;
	char *c;
	char *j = ", ";

	va_start(parametros, format);

	while (format && format[i])
	{
		i++;
	}
	while (format && format[o])
	{
		if (o  == (i - 1))
		{
			j = "";
		}
		switch (format[o])
		{
		case 'c':
			printf("%c%s", va_arg(parametros, int), j);
			break;
		case 'i':
			printf("%d%s", va_arg(parametros, int), j);
			break;
		case 'f':
			printf("%f%s", va_arg(parametros, double), j);
			break;
		case 's':
			c = va_arg(parametros, char *);
			if (c == NULL)
				c = "(nil)";
			printf("%s%s", c, j);
			break;
		}
		o++;
	}
	printf("\n");
	va_end(parametros);
}
