#include "function_pointers.h"

/**
 * array_iterator - Iterate an Array
 * @array: Array data
 * @size: Size of array
 * @action: Action on each elem
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != (void *)0 && action != (void *)0)
	{
		i = 0;
		while(i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
