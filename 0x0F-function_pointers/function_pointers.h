#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));

#endif
