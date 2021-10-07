#include "main.h"

/**
 * print_alphabet_x10 - Check the code
 * 
 * Return: 0
 */
void print_alphabet_x10(void)
{
int i, x; 
for (x = 1; x <= 10; x++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
