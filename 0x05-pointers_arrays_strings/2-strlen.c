#include "main.h"
/**
 * _strlen - check the code
 * @s: variable
 * Return: length os a string
 */
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
