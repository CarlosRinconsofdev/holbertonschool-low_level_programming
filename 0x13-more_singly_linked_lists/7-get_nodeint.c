#include "lists.h"
/**
 * get_nodeint_at_index - Return the nth node of a linked list
 * @head: node
 * @index: int
 * Return: The nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int i;
if (head == NULL)
node = head;
i = 0;
while (node != NULL)
{
if (i == index)
return (node);
node = node->next;
i++;
}
return (NULL);
}
