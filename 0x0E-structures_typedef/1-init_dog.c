#include "dog.h"
#include <stdio.h>




/**
 * init_dog - this initialise the function
 * @d: a pointer
 * @name: a pointer to a dog's name
 * @age: a dog age
 * @owner: a pointer to dog's owner
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
