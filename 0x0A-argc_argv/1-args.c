#include <stdio.h>

/**
 * main - Entry Point of the Program
 * @argc: Number of args
 * @argv: Array of args
 *
 * Return: 0 for successful run
 */
int main(int argc, char *argv[])
{

	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
