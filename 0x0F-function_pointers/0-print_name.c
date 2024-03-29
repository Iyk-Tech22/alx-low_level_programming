#include "function_pointers.h"

/**
 * print_name - Print name to the screen
 * @name: Input name to print
 * @func: function to print the name
 */
void print_name(char *name, void (*func)(char *n))
{
	if (name != (void *)0 && func != (void *)0)
		func(name);
}
