#include <stdio.h>
#include "main.h"
/**
 * get_bit - function
 * @i: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int j;
	int res;
	unsigned long int num = n;

	res = (num >> index) & 1;
	if ((res == 1) || (res == 0))
	{
		return (res);
	}
	else
	{
		return (-1);
	}
}
