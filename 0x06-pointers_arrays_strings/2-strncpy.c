#include "main.h"
/**
 * _strncpy - check the code
 * @dest: char1
 * @src: char2
 * @n: int
 * Return: A function
 */
char *_strncpy(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *temp = dest, *start = src;
while (*src)
{
srclen++;
src++;
}
srclen++;
if (n > srclen)
n = srclen;
src = start;
for (i = 0; i < n; i++)
*dest++ = *src++;
return (temp);
}
