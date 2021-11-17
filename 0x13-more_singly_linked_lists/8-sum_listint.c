#include "lists.h"
/**
 * sum_listint - Sum of all of the data
 * @head: ptr
 * Return: The sum of all of the data or 0
 */
int sum_listint(listint_t *head)
{
int sum;
listint_t *node;
sum = 0;
if (head == NULL)
return (sum);
node = head;
while (node != NULL)
{
sum += node->n;
node = node->next;
}
return (sum);
}
