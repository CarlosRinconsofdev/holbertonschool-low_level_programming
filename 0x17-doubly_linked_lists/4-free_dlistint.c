#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: ptr
 * Return: no
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
