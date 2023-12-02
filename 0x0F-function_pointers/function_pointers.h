#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H

#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int _putchar(char);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* _FUNCTION_POINTERS_H */
