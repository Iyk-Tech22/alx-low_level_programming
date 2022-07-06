#include "main.h"

/**
 * _isalpha - Checks input for all alph case
 * @c: input data to be check
 *
 * Return: 1 if true or 0 in it not a alph
 */
int _isalpha(char c)
{
	char a, A;
	int found;

	found = 0;
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			found = 1;
			break;
		}
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		if (a == c)
			break;
		if (c == A)
		{
			found = 1;
			break;
		}
	}
	if (found)
		return (1);
	return (0);
}

