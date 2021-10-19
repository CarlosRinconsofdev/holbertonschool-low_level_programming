#include "main.h"
#define NULL 0
/**
 * _strchr - check the  code
 * @s: char 1
 * @c: char 2
 * Return: Pointer to the first ocurrence
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (c == *s)
return (s);
s++;
}
if (c == *s)
return (s);
return (NULL);
}
