#include <stdio.h>
/**
 * main - check the code
 * @argc: counter
 * @argv: value
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
