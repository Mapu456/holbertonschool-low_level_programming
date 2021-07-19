#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function
 * @d: pointer of struct dog to initialize
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
