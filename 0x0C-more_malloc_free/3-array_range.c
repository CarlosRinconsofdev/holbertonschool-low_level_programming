#include "main.h"
#include <stdlib.h>
/**
 * array_range - check the code
 * @min: int 1
 * @max: int 2
 * Return: A pointer
 */
int *array_range(int min, int max)
{
int *arr, diff, j;
if (min > max)
return (NULL);
diff = max - min;
arr = malloc((diff + 1) * sizeof(int));
if (arr == NULL)
return (NULL);
for (j = 0; j <= diff; j++)
arr[j] = min++;
return (arr);
}
