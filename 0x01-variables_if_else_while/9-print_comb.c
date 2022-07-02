#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if there were no error
 */
int main(void)
{
	int n, b;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		for (b = 0; b < 1; b++)
		{
			if (n != 9)
				putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
