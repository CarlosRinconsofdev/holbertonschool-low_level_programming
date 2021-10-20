#include "main.h"
/**
 * _strcmp - check the code
 * @s1: char
 * @s2: char
 * Return: function
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++, s2++;
}
return (*s1 - *s2);
}
