#include "main.h"

/**
 * _strspn - Get the length of a substring
 * @s: Input string to check for march
 * @accept: Substring to check for march
 *
 * Return: Length of substring in the string
 */
unsigned int _strspn(char *s, char *accept)
{
	char *strp;
	unsigned int n;

	n = 0;
	while (*accept != '\0')
	{
		strp = s;
		while (*strp != '\0')
		{
			if (*strp == *accept)
			{
				n++;
				break;
			}
			strp++;
		}
		accept++;
	}
	return (n);
}
