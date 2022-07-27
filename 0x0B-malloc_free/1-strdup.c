#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a copy of a string
 * @str: String to duplicate
 * Return: A pointer to dup string or Null if malloc failed
 */
char *_strdup(char *str)
{
	char *strp;
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	strp = (char *) malloc(i);
	if (strp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		strp[i] = str[i];
	}
	strp[i] = '\0';
	return (strp);
}
