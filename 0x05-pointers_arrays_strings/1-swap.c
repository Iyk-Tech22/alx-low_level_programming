#include "main.h"

/**
 * swap_int - Swaps two interger values
 * @b: Input data to swap
 * @a: Inut data to swap
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
