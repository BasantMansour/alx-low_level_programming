#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog.
 * struct dog - it is dog struct.
 * @name: it is name.
 * @age: it is age.
 * @owner: the owner name.
 * @d:dog to int.
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
