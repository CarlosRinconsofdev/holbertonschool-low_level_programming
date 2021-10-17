#include "main.h"
/**
 * print_diagonal - check the code
 * @n: Variable
 * Return: void
 */
void print_diagonal(int n)
{
int j, i = 0;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
else
_putchar('\n');
}
