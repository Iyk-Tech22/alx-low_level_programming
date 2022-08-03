#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of specific range
 * @min: Low value of the array
 * @max: The Maximun value in the array
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(4 * max);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
		array[i] = i;
	return (array);
}
