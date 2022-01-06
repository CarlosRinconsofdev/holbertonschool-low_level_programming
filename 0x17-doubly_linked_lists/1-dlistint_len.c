#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function returns the number of elements in a linked dlist
 * @h: head list
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t size = 0;
const dlistint_t *head;

head = h;
while (head)
{
head = head->next;
size++;
}
return (size);
}
