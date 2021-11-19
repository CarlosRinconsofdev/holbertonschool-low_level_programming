#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: int
 * Return: Void
 */
void print_binary(unsigned long int n)
{
unsigned long int l = 0, max = 32768;
if (n == 0)
{
_putchar('0');
return;
}
while (max)
{
if (l == 1 && (n & max) == 0)
_putchar('0');
else if ((n & max) != 0)
{
_putchar('1');
l = 1;
}
max >>= 1;
}
}
