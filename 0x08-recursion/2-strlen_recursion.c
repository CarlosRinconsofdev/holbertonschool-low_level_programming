#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: char
 * Return: Function return the length os a string
 */
int _strlen_recursion(char *s)
{
if (*s)
return (1 + _strlen_recursion(s + 1));
return (0);
}
