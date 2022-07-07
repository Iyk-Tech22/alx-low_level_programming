#include "main.h"

/**
 * times_table - print a times table of 0 - 9
 */
void times_table(void)
{
	int n, m, res;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');
		for (m = 0; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');

			res = n * m;
			if (res < 9)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
