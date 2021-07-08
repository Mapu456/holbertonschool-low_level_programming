#include <stdio.h>
#include "holberton.h"
/**
 * main - prints name
 * @argv: array whit arguements
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
