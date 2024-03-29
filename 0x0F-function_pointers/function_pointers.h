#ifndef _function_pointers_
#define _function_pointers_
#include <stddef.h>

void _putchar(int n);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
