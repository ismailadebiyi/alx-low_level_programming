#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initiallize dog
 * @d: dog Object
 * @name: name of dog
 * @owner: Dog owner
 * @age: age of Dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->owner = owner;
		d->age = age;
		d->name = name;
	}
}
