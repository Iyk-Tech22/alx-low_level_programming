#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if there were no errors
 */
int main(void)
{
	int n, b;

	for (n = 0; n < 10; n++)
	{
		for (b = 1; b < 10; b++)
		{
			putchar(n + '0');
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
