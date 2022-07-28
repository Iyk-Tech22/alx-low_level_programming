#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @str1: String one
 * @str2: String two
 * @n: Number of byte of str2 to concat with str1
 *
 * Return: Pointer or NULL
 */
char *string_nconcat(char *str1, char *str2, unsigned int n)
{
	unsigned int i, j, len1, len2, tol;
	char *str_concat;

	i = len1 = len2 = 0;
	if (str1 != NULL)
	{

		while (str1[i++])
			len1++;
	}
	if (str2 != NULL)
	{
		i = 0;
		while (str2[i++])
			len2++;
		if (n < len2)
			len2 = n;
	}
	tol = len1 + len2;
	str_concat = malloc(tol + 1);
	if (str_concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str_concat[i] = str1[i];
	for (j = 0; j < len2; j++, i++)
		str_concat[i] = str2[j];
	str_concat[tol] = '\0';
	return (str_concat);
}
