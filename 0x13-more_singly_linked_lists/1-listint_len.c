#include "lists.h"
/**
 * listint_len - Elements in a list
 * @h: Function
 * Return: Number
 */
size_t listint_len(const listint_t *h)
{
size_t size = 0;
while (h != NULL)
{
size++;
h = h->next;
}
return (size);
}
