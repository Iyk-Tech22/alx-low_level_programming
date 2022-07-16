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
	int destlen;
	int i;
	char *destp;

	destlen = 0;
	destp = dest;
	while (*dest != '\0')
	{
		destlen++;
		dest++;
	}	
	for(i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + 1] = '\0';
	return (destp);
}
