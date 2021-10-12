#include "main.h"

/**
 * print_last_digit - prototype
 * @N: variable
 * Return: 0
 */
int print_last_digit(int N)
{
int c;
c = (N % 10);
if (c < 0)
{
c = -c;
}
_putchar(48 + c);
return (c);
}
