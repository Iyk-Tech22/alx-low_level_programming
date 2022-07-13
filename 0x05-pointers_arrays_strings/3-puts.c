#include "main.h"

/**
 * _puts - Print string to stdout
 * @str: Input string to print
 */
void _puts(char *str)
{
	char cha = *str;

	while (cha)
	{
		_putchar(cha);
		cha = *++str;
	}
	_putchar('\n');
}
