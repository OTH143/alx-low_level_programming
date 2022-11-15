#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intializes the variable of typestruct dog
 * @d: param 1
 * @name: param 2
 * @age: param 3
 * @owner: param 4
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
