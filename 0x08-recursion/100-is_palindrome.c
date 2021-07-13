#include "holberton.h"
#include <stdio.h>

int all_function(char *s, int c, int len);
int _long(char *s);

/**
 * is_palindrome - determine if string is a palindrome
 * @s: string 
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (all_function(s, 0, _long(s)));
}

/**
 * _long - length of a string
 * @s: calculate the length of
 *
 * Return: length of the string
 */
int _long(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _long(s + 1));
}

/**
 * all_function - evaluate if are palindrome
 * @s: string to check
 * @c: int
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int all_function(char *s, int c, int len)
{
	if (*(s + c) != *(s + len - 1))
	{
		return (0);
	}
	if (c >= len)
	{
		return (1);
	}
	return (all_function(s, c + 1, len - 1));
}
