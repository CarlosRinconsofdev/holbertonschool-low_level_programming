#include "lists.h"

/**
 * print_listint - print all functions of list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
