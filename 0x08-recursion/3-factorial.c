#include "main.h"
/**
 * factorial - check the code
 * @n: integer
 * Return: Function the factorial
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
