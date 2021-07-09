#include "holberton.h"

/**
 * _strlen_recursion - function that return the lenght of a function
 * @s: input
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
