#include "main.h"

/**
 * _strpbrk - Search for the first of occurence of substring
 * @s: Input string to search
 * @accept: Input substring to search for
 *
 * Return: Pointer to the first occurence or null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	b = 0;
	while (accept[a] != '\0')
	{
		while (s[b] != '\0')
		{
			if (accept[a] == s[b])
			{
				return (&s[b]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
