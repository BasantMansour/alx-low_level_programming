#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is a dog struct
 * @name: this is dog name
 * @age: this is dog age
 * @owner: this is owner name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
