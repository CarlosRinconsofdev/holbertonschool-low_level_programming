#include "main.h"
#include <stdio.h>
/**
 * print_array -check the code
 * @a: array
 * @n: variable
 * Return: void
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
