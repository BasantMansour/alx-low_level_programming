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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif