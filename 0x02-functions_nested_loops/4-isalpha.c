#include "main.h"

/**
 * _isalpha - Check the code
 * @c: variable in
 * Return: 0 -1
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

