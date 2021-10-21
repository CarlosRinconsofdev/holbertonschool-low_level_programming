#include "main.h"
/**
 * _puts_recursion - check the code
 * @s: char
 * Return : Function prints a new line
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
