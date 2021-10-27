#include "main.h"
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: string
 * Return: Pointer
 */
char *_strdup(char *str)
{
int length, i;
char *arr;
if (str == NULL)
{
return (NULL);
}
length = 0;
while (*(str + length) != '\0')
{
length++;
}
arr = malloc(length *sizeof(char) + 1);
if (arr == NULL)
return (NULL);
for (i = 0; i < length; i++)
{
arr[i] = str[i];
}
arr[i] = '\0';
return (arr);
}
