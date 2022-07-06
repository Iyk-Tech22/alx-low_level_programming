#include "main.h"

/**
 * print_sign - It Print sign of a number
 * @n: input to get sign from
 *
 * Return: 1 if pos or 0 if zero or -1 if nev
 */
int print_sign(int n)
{
	int num;

	num = 0;
	if (n  > num)
	{
		_putchar(43);
		return (1);
	}
	else if (n == num)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}	
