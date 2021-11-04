#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - check the code
 * @name: char
 * @f: ptr
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
