#include "holberton.h"
#include <stdio.h>
int prime(int n, int i);
/**
 * is_prime_number - number prime
 * @n: input
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return (0);
	return (prime(n, 2));
}
/**
 * prime - number prime
 * @n: input
 * @i: counter
 * Return: if square root
 */
int prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (prime(n, i + 1));
}
