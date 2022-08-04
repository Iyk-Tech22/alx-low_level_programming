#ifndef _FUNCTION_PIONTER_H
#define _FUNCTION_PIONTER_H

#include <stdlib.h>
void print_name(char *name, void(*func)(char *n));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
