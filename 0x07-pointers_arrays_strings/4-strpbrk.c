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
	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}
