#include"main.h"
/**
 * set_bit - Set the value of a bit
 * @n: int
 * @index: Unsigned int
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= (sizeof(*n) * 8))
return (-1);
mask = 1;
*n = *n | (mask << index);
return (1);
}
