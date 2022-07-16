#include "main.h"

/**
 * _strncat - Concat two strings by n times
 * @dest: Input to append to
 * @src: Input data to contc
 * @n: Input number times to contcat
 *
 * Return: Return a pointer of the dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *destp;

	destp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (destp);
}
