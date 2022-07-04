#include <stdio.h>

/**
 * main - Entry point the program
 *
 * Return: 0 if there were no error
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 9; b++)
		{
			for (c = b + 1; c < 10; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (b == 8 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
