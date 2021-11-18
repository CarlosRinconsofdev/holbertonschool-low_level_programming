#include "lists.h"
/**
 * reverse_listint - Function that reverse a linked list
 * @head: Double ptr
 * Return: Pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next, *prev;

prev = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
