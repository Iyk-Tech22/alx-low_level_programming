#include "main.h"

/**
 * _strchr -  Search for specific character in a string
 * @s: String to search
 * @c: Character to search for
 *
 * Return: Pointer to the first occurence or Null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
