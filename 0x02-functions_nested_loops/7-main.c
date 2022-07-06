#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: 0 if there were no error
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
