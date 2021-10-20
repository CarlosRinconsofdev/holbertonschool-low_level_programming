#include "main.h"
/**
 * string_toupper - check the code
 * @s: string
 * Return: Function
 */
char *string_toupper(char *s)
{
char *start = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
*s -= 32;
s++;
}
return (start);
}
