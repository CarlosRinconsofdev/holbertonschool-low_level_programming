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
for (r = n; r <= 97; r++)
{
printf("%i, ", r);
}
}
else
{
for (r = n; r > 98; r--)
{
printf("%i, ", r);
}
}
printf("98\n");
}
