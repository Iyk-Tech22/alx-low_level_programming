#include "main.h"

/**
 * print_last_digit - print the last digt
 * @n: input data to get last digit from
 *
 * Return: It return the last digit
 */
int print_last_digit(int n)
{
	int res, z;

	res = n % 10;
	if (n < 0)
		z = res * -1;
	else
		z = res;
	_putchar(z + '0');
	return (z);
}
