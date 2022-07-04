#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if there were no error
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(str, 1, sizeof(str), stderr);
	fwrite("\n", 1, 1, stderr);
	return (1);
}
