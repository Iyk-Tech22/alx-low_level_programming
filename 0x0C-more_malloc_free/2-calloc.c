#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate mem from heap
 * @nmemb: Number of element
 * @size: size of each element
 *
 * Return: Pointer for success / NULL for failed mem alloc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem_alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem_alloc = malloc(nmemb * size);
	if (mem_alloc == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		mem_alloc[i] = 0;
	return (mem_alloc);
}
