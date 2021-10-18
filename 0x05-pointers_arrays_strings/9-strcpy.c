#include "main.h"
/**
 * _strcpy - check the code
 * @dest: string
 * @src: string
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src)
*dest++ = *src++;
return (p);
}
