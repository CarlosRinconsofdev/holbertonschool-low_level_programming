#include "main.h"

/**
 * _memset - check the code
 * @s: char
 * @b: char
 * @n: int
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
