#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));
int main(int argc, char *argv[]);

#endif
