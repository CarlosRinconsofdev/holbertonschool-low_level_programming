#include "main.h"
/**
 * _strcat - Check the code
 * @dest: char 1
 * @src: char 2
 * Return: Pointer
 */
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = '\0';
return (temp);
}
