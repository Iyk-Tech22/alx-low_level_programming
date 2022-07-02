#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Return: 0 if there were no errors
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
