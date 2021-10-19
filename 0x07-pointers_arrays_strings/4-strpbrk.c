#include "main.h"
#define NULL 0

/**
 * _strpbrk - check the code
 * @s: char 1
 * @accept: char 2
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
char *start = accept;
while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}
accept = start;
s++;
}
return (NULL);
}
