#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate mem
 * @b: Number of memmory allocate
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *allo_mem;

	allo_mem = malloc(b);
	if (allo_mem == NULL)
		exit(98);
	return (allo_mem);
}
