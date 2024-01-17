#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array from the heap
 * @size: Size of the array
 * @c: char in the array
 *
 * Return: A pointer to a char or Null if no mem alloc
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (!size)
		return (NULL);
	arr = malloc(size * sizeof(char));
	while (i < size && arr)
		arr[i++] = c;
	return (arr);
}
