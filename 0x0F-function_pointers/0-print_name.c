#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints the the function
 * @name - points to the the names string
 * @f - pointer to the function
 * Return : NULL 0
 */

void print_name(char *name, void (*f)(char *))

{
if(name != NULL && f != NULL)
f(name);

}
