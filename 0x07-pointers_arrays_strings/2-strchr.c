#include "main.h"
#include <stddef.h>

/**
 * _strchr -  Search for specific character in a string
 * @s: String to search
 * @c: Character to search for
 *
 * Return: Pointer to the first occurence or Null if not found
 */
char *_strchr(char *s, char c)
{
	char *charp;

	charp = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			charp = s;
			return (charp);
		}
		s++;
	}
	return (charp);
}
