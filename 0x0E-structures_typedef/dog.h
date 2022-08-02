#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog data structure
 * @name: first member
 * @owner: sec member
 * @age: third member
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char*, float, char*);
void print_dog(struct dog *d);

#endif
