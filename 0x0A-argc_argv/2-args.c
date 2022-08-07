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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
