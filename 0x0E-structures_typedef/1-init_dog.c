#include "dog.h"

/**
 * init_dog - initialize the a dog struct
 * @name: first mem int
 * @age: sec mem float
 * @owner: third mem char
 * @d: pointer to the struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
