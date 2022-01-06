#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function prints all the elements of a dllist.
 * @h: head dllist
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
const dlistint_t *head;

head = h;
while (head)
{
printf("%d\n", head->n);
head = head->next;
nodes++;
}
return (nodes);
}
