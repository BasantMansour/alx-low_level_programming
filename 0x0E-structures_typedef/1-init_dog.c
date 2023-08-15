#include "dog.h"

/**
 * init_dog - this is initializes a dog
 * @d: the dog to init
 * @name: this is dog name
 * @age: this is dog age
 * @owner: this is owner name
 *
 * Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
