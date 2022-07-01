#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 if there were no error running
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
