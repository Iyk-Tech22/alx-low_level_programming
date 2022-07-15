#include "main.h"

/**
 * _strlen - Get the length of string
 * @str: String to get it length
 *
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len;

	len = 0;
 	while (*++str != '\0')
		len++;
 	return (len++);
}
