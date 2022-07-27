#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concat two string together
 * @str1: String 1 to hold the content string 2
 * @str2: String 2 to be concat to string 1
 *
 * Return: Return a pointer hold all the content or emty str for arg/ Null
 */
char *str_concat(char *str1, char *str2)
{
	char *strcat;
	unsigned int i, str1len, str2len, newstr2len;

	if (str1 == NULL || str2 == NULL)
	{
		return ("");
	}
	i = 0;
	str1len = sizeof(str1) - 1;
	str2len = sizeof(str2) - 1;
	newstr2len = str2len + 1;
	strcat = (char *) malloc((str1len + str2len) + 2);
	if (strcat == NULL)
		return (NULL);
	while (i <= sizeof(strcat))
	{
		strcat[i] = str1[i];
		if (i == str1len + 1)
			strcat[i] = ' ';
		else
		{

			str2len = i - newstr2len;
			strcat[i] = str2[str2len];
			if (i == str2len)
			{
				strcat[i] = '\0';
				break;
			}
		}
	}
	return (strcat);
}
