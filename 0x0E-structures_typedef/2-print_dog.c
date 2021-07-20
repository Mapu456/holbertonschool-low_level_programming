#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function
 * @d: pointer of struct dog to initialize
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

