#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - function that returns the sum of all the data of a dllist
 * @head: ptr
 * Return: If the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
