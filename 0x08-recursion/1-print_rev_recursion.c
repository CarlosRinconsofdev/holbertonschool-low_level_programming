#include "main.h"
/**
 * _print_rev_recursion - check the code
 * @s: char
 * Return: Function prints  string
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
