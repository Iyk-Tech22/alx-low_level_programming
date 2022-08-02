#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog data structure
 * @name: first member
 * @owner: sec member
 * @age: third member
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char*, float, char*);
void print_dog(struct dog *d);

#endif
