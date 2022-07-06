#include "main.h"

/**
 * _islower - Checks data if it lowercase
 * @c: character to be check
 *
 * Return: 1 for true or 0 for false
 */
int _islower(char c)
{
	char alph;
	int found = 0;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == c)
		{
			found = 1;
			break;
		}
	}
	if (found)
		return (1);
	return (0);
}
