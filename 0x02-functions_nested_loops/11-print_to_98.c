#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check the code
 * @n: variable
 */
void print_to_98(int n)
{
int r;
if (n < 98)
{
for (r = n; r <= 98; r++)
{
printf("%i, ", r);
}
if (n == 98)
{
printf("%i, ", 98);
}
if (n > 98)
{
for (r = n; r >= 98; r--)
{
printf("%i, ", r);
}
}
}
}
