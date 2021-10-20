#include "main.h"
/**
 * reverse_array - check the code
 * @a: int1
 * @n: int2
 * Return: Function
 */
void reverse_array(int *a, int n)
{
int i = 0;
int aux;
while (i < n--)
{
aux = a[i];
a[i++] = a[n];
a[n] = aux;
}
}
