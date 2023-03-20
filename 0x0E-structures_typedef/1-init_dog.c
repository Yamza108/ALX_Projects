#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * init_dog - Initilizes a variable of type struct dog
 * @d: The dog to be initialized.
 * @name: The name of the dog
 * @age: Age of the dog
 * @owner: owner of the dog
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
