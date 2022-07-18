#include "main.h"

/**
 * _strchr -  Search for specific character in a string
 * @s: String to search
 * @c: Character to search for
 *
 * Return: Pointer to the first occurence or Null if not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
