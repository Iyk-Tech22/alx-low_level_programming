#include "function_pointers.h"

/**
 * int_index - Search for interger
 * @array: Array of intergers
 * @size: Size of array
 * @cmp: Pointer to a func
 * Return: Index of the match interger/ -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result)
			break;
	}
	if (result)
		return (i);
	else
		return (-1);
}
