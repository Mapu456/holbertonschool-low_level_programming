#include <stdio.h>
#include "holberton.h"
/**
 * main - prints name
 * @argv: array whit arguements
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
