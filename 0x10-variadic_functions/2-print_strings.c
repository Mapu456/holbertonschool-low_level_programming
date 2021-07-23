#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: number of elements to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parametros;
	unsigned int i;
	char *c;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(parametros, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(parametros, const unsigned int);
		if (c == NULL)
		{
			c = "(nil)";
		}
		if (i == (n - 1))
		{
			printf("%s", c);
		}
		else
		{
			printf("%s%s", c, separator);
		}
	}
	printf("\n");
	va_end(parametros);
}
