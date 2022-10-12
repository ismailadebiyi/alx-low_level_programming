#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: name of dog
 * @owner: Dog owner
 * @age: age of Dog
 * Return: new dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	d = malloc(sizeof(dog_t));
	if (d == NULL || name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
	return (d);
}
