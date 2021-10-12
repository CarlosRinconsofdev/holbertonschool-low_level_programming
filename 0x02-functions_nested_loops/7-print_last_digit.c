#include "main.h"

/**
 * print_last_digit - prototype
 * @N: variable
 * Return: 0
 */
int print_last_digit(int N)
{
int c;
if (N < 0)
{
N = (N * -1);
}
c = (N % 10);
_putchar(48 + c);
return (c);
}
