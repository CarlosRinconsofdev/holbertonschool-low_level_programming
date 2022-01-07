#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a new node at the end
 * @head: Doubly ptr
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode = NULL,
*temp = NULL;

newnode = malloc(sizeof(dlistint_t));
if (!newnode)
{
free(newnode);
return (NULL);
}
newnode->next = NULL;
newnode->prev = NULL;
newnode->n = n;

if (!head || !(*head))
{
*head = newnode;
return (newnode);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
newnode->prev = temp;
temp->next = newnode;
return (newnode);
}
return (NULL);
}
