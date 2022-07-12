#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 if there were no error
 */
int main(void)
{
	int n;

	n  = 402;
	printf("n = %d\n", n);
	reset_to_98(&n);
	printf("n = %d\n", n);
	return (0);
}
