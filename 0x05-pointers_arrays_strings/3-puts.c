#include "main.h"
/**
 * _puts -check the code
 * @str: string
 * Return: no
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
