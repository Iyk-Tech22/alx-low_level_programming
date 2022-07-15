#include "main.h"

/**
 * _strcat - Concat two string together
 * @decs: input string to concat
 * @src: input string to concat
 *
 * Return: Return a pointer decs
 */
char *_strcat(char *dest, char *src)
{
	char *p;

	p = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
