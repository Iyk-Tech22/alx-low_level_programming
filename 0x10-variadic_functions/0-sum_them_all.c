#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all numbers
 * @n: numbers of args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(args, n);
	sum = i = 0;
	for (i = 0; i < n; i++)
	
		sum += va_arg(args, int);
	va_end(args);
	return sum;
}
