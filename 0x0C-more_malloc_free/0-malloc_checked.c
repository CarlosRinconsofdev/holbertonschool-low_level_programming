#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
