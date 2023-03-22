#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates a new instance of dog
 *
 * @d: Dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
