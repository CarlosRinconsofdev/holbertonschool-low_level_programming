#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - function that returns the nth node of a dllist
 * @head: ptr
 * @index: int
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int p = 0;
while (head)
{
if (p++ == index)
break;
head = head->next;
}
return (head);
}
