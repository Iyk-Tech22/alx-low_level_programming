#include "main.h"

/**
 * _memcpy - Copy n number of bytes from the source to destination
 * @src: Input Memory area to copy from
 * @dest: Input Memory area to copy to
 * @n: number of bytes to copy from source
 *
 * Return: Pointet of destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i;
	char *startp;

	startp = dest;
	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (startp);
}
