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
	char *arr;
	unsigned int i;

	i = 0;
	arr = (char *) malloc(size);
	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
