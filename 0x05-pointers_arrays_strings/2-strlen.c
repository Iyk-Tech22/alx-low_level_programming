#include "main.h"

/**
 * _strlen - Print length of a string
 * @s: String to print it length
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
	{
		len++;
	}
	return (len);
}
