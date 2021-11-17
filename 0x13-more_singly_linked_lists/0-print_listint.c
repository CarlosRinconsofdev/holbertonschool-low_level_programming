#include "lists.h"

/**
 * print_listint - print all functions of list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t size = 0;
while (h != NULL)
{
size++;
printf("%d\n", h->n);
h = h->next;
}
return (size);
}
