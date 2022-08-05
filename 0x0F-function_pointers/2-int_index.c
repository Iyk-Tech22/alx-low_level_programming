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

	if (size > 0)
	{
		if (array != (void *)0 && cmp != (void *)0)
		{
			for (i = 0; i < size; i++)
			{
				result = cmp(array[i]);
				if (result)
					return(i);
			}
		}
	}
	return (-1);
}
