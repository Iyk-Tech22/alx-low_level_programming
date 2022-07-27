#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concat two string together
 * @str1: String 1 to hold the content string 2
 * @str2: String 2 to be concat to string 1
 *
 * Return: Return a pointer hold all the content or emty str for arg/ Null
 */
char *str_concat(char  *str1, char *str2)
{
	int i, j,  strlen1, strlen2, size;
	char *concat;

	if (str1 == NULL || str2 == NULL)
		return ("");
	i = j = strlen1 = strlen2 = 0;
	while (str1[i])
	{
		strlen1++;
		i++;
	}
	i = 0;
	while (str2[i])
	{
		strlen2++;
		i++;
	}
	size = strlen1 + strlen2;
	concat = malloc(size + 1);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < strlen1; i++)
		concat[i] = str1[i];
	for (j = 0; j < strlen2; j++, i++)
		concat[i] = str2[j];
	concat[size] = '\0';
	return (concat);
}
