#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - function
 * @d: pointer
 * @name: char
 * @age: float
 * @owner: char
 * Return :
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
			d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
