#include "main.h"

/**
 * _memset - Fill n byte of memory area with b byte
 * @s: pointer to imput memory area to fill
 * @b: Input data to fill with
 * @n: total number if byte to fil
 *
 * Return: A pointer of the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
