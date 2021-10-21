#include "main.h"
/**
 * _pow_recursion - check the code
 * @x: int 1
 * @y: int 2
 * Return: value of x
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else if (y == 1)
return (x);
return (x *= _pow_recursion(x, y - 1));
}
