#include <stdio.h>
#include "holberton.h"
/**
 * main - prints name
 * @argv: array whit arguements
 * @argc: number of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
