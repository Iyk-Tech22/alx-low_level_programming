#include "main.h"

/**
 * _abs - Print the absolute value
 * @n: input to print
 *
 * Return: The absolute value of the input
 */
int _abs(int n)
{
	int num;

	num = 0;
	if (n > num)
		return (n);
	else if (n == 0)
		return (n);
	else
		return (n * -1);
}
