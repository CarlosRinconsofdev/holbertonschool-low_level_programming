#include "main.h"

/**
 * _memcpy.c - check the code
 * @dest: Destination
 * @src: char
 * @n: int
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
