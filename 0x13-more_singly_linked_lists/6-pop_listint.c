#include "lists.h"
/**
 * pop_listint - The head node of a linked list
 * @head: Double ptr
 * Return: Head nodes data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;
temp = *head;
n = 0;
if (*head == NULL)
return (n);
*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
