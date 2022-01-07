#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: Doubly ptr
 * @n: int
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
temp->prev = newnode;
*head = newnode;
newnode->next = temp;
return (newnode);
}
return (NULL);
}
