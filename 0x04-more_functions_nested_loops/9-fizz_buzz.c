#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
int i = 1;
for (i > 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("fizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}
printf("Buzz\n");
return (0);
}
