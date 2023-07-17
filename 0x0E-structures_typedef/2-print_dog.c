#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog.
 * @d: print dog .
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %S\n", d->owner : "(nil)");
	}
}

