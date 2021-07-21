#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - funtion
 * @name: name
 * @f: pointer that print a function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}

