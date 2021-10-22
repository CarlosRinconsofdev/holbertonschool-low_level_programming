#include "main.h"
int is_divisible(int num, int div);
/**
 * is_prime_number - check the code
 * @n: int
 * Return: 1 if int is a prime number
 */
int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
return (0);
if (n <= 3)
return (1);
return (is_divisible(n, div));
}

/**
 * is_divisible - check if num is divisible
 * @num: number to check
 * @div: result
 * Return: 1
 */
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
