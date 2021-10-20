#include "main.h"
/**
 * _strncat - Check the code
 * @dest: char1
 * @src: char2
 * @n: int
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int srclen = 0, i = 0;
char *temp = dest = dest, *start = src;
while (*src)
{
srclen++;
src++;
}
while (*dest)
dest++;
if (n > srclen)
n = srclen;
src = start;
for (; i < n; i++)
*dest++ = *src++;
*dest = '\0';
return (temp);
}
