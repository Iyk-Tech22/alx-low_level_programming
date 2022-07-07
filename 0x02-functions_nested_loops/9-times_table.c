#include "main.h"

/**
 * times_table - print a times table of 0 - 9
 */
void times_table(void)
{
	int n, b;

	for (n = 0; n < 10; n++)
	{
		for (b = 0; b < 10; b++)
		{
			_putchar((n*b) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
