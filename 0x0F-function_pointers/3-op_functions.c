#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - funtion
 * @a: number
 * @b: number
 * Return: number
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - funtion
 * @a: number
 * @b: number
 * Return: number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - funtion
 * @a: number
 * @b: number
 * Return: number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - funtion
 * @a: number
 * @b: number
 * Return: number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - funtion
 * @a: number
 * @b: number
 * Return: number
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

