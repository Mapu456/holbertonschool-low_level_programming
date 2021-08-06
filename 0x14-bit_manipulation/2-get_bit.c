#include <stdio.h>
#include "main.h"
/**
 * get_bit - function
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res;

	res = (n >> index) & 1;
	if ((res == 1) || (res == 0))
	{
		return (res);
	}
	else
	{
		return (-1);
	}
}
