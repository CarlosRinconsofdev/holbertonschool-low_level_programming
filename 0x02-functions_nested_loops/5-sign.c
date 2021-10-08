#include "main.h"

/**
 * print_sign - Check the code
 * @n: Variable int
 * Return: -1, 0, 1
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar ('+');
}
if (n == 0)
{
return (0);
_putchar(0);
}
if (n < 0)
{
return (-1);
_putchar ('-');
}
}
