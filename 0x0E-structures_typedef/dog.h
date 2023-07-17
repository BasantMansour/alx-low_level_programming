#ifndef DOG_H
#define DOG_H

/**
 * struct dog - it is dog struct.
 * @name: it is name.
 * @age: it is age.
 * @owner: the owner name.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
