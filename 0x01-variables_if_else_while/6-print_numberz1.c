#include <stdio.h>

/**
 * print - print declaration
 * @n: Interger input to be print
 */
void print(long int n);

/**
 * main - entry point for the program
 *
 * Return: 0 if there were no errors
 */
int main(void)
{
	long int n;

	n = 12356789;
	print(n);
	putchar('\n');
	return (0);
}

/**
 * print - print defination
 * @n: Interger data to print
 *
 * Description: a recur fun that print data
 */
void print(long int n)
{
	if (n / 10)
		print(n / 10);
	putchar(n % 10 + '0');
}
