#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: number of elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parametros;
	unsigned int i, c;

	va_start(parametros, n);
	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			c = va_arg(parametros, int);
			if (i == (n - 1))
			{
				printf("%d", c);
			}
			else
			{
				printf("%d %s", c, separator);
			}
		}
		printf("\n");
	}
	va_end(parametros);
}
