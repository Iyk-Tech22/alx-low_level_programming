#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point of the Program
 * @argc: Number of args
 * @argv: Array of args
 *
 * Return: 0 for successful run
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
