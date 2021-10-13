#include "main.h"
/**
 * times_table - check the code
 */
void times_table(void)
{
int N, n, r;
for (N = 0; N <= 9; N++)
{
for (n = 0; n <= 9; n++)
{
r = (N * n);
if (r <= 9)
{
_putchar(r + '0');
_putchar(',');
_putchar(32);
}
else
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
