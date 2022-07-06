#include "main.h"

/**
 * jack_bauer - Print minutes of time gone
 */
void jack_bauer(void)
{
	int h, m, s1, s2;

	for (h = 0; h < 3; h++)
	{
		for(m = 0; m < 10; m++)
		{
			for (s1 = 0; s1 < 6; s1++)
			{
				for (s2 = 0; s2 < 10; s2++)
				{
					if (h == 2 && m == 3 && s1 == 5 && s2 == 9)
						goto out;
					_putchar(h + '0');
					_putchar(m + '0');
					_putchar(':');
					_putchar(s1 + '0');
					_putchar(s2 + '0');
					_putchar(' ');
				}
			}
		}
	}
out:
}
