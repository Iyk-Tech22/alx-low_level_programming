#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog element
 * @d: Dog Object
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0 || d->owner == NULL)
		printf("(nil)");
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
